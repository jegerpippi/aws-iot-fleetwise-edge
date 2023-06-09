// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#pragma once

#if defined( IOTFLEETWISE_LINUX )
// Includes
#include <cstddef>
#include <cstdint>

namespace Aws
{
namespace IoTFleetWise
{
namespace Platform
{
namespace Linux
{

/**
 * @brief Utility class to track and report Memory Consumption.
 */
class MemoryUsageInfo
{
public:
    /**
     * @brief Updates the current CPU usage stats.
     * @return True if the report succeeded.
     */
    bool reportMemoryUsageInfo();

    /**
     * @brief Gets the maximum resident size.
     *
     * This represents the maximum amount of physical memory used by the process.
     * @return The maximum resident size in bytes.
     */
    std::size_t getMaxResidentMemorySize() const;

    /**
     * @brief Gets the current resident size in bytes.
     *
     * This represents the current amount of physical memory used by the process.
     * @return The current resident size in bytes.
     */
    std::size_t getResidentMemorySize() const;

    /**
     * @brief Gets the current virtual size in bytes.
     *
     * This represents current virtual memory assigned to the process.
     * @return The current virtual size in bytes.
     */
    std::size_t getVirtualMemorySize() const;

private:
    std::size_t mMaxResidentMemorySize{ 0 };
    std::size_t mResidentMemorySize{ 0 };
    std::size_t mVirtualMemorySize{ 0 };
};

inline std::size_t
MemoryUsageInfo::getMaxResidentMemorySize() const
{
    return mMaxResidentMemorySize;
}

inline std::size_t
MemoryUsageInfo::getResidentMemorySize() const
{
    return mResidentMemorySize;
}

inline std::size_t
MemoryUsageInfo::getVirtualMemorySize() const
{
    return mVirtualMemorySize;
}

} // namespace Linux
} // namespace Platform
} // namespace IoTFleetWise
} // namespace Aws
#endif // IOTFLEETWISE_LINUX

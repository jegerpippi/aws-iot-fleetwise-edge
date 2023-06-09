## AWS IoT FleetWise Offboarding and Data Deletion

To delete all of your “free text data” from the ECU running AWS IoT FleetWise, please run the
following commands:

1. Stop AWS IoT FleetWise

   ```bash
   sudo systemctl stop fwe@0
   ```

2. Disable AWS IoT FleetWise

   ```bash
   sudo systemctl disable fwe@0
   ```

3. Delete all persistent data files

   ```bash
   sudo rm -f /var/aws-iot-fleetwise/*
   ```

4. Delete AWS IoT FleetWise configuration files

   ```bash
   sudo rm -f /etc/aws-iot-fleetwise/*
   ```

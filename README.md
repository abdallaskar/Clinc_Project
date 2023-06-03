# Clinic Management System
This project is a Clinic Management System implemented in C programming language. The system provides different functionalities for both admin and user modes. The admin mode requires a password for authentication, while the user mode does not require any password.

Features
## Admin Mode
In the admin mode, the system provides the following features:

Add new patient record: The admin can add a new patient by entering basic information such as name, age, gender, and ID. The ID must be unique, and if the entered ID already exists, the system will reject the entry.

Edit patient record: The admin can edit a patient's information by entering their ID. The system will check if the ID exists, and if it does, the admin can make changes to the patient's information. If the ID does not exist, an error message will be displayed.

Reserve a slot with the doctor: The system displays the available time slots (2pm to 2:30pm, 2:30pm to 3pm, 3pm to 3:30pm, 4pm to 4:30pm, and 4:30pm to 5pm). The admin can reserve a slot for a patient by entering the patient's ID and the desired slot. Once reserved, the slot will no longer appear as available for the next patient reservation.

Cancel reservation: The admin can cancel a reservation by entering the patient's ID. The canceled reservation will be shown again as an available slot for future reservations.

## User Mode
In the user mode, the system provides the following features:

View patient record: By entering the patient's ID, the system will display the basic information of the patient, including name, age, gender, and ID.

View today's reservations: The system will print all the reservations for the current day, showing the patient's ID attached to each reservation slot.

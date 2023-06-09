// Filament Section


#define FILAMENT_SUCTION_GAP 200
#define FILAMENTCHANGE_INSERTION_SCRIPT "M600 I1 U-55 X55 Y-92 W200 Z200"
#define FILAMENTCHANGE_EXTRACTION_SCRIPT "M600 I-1 U-55 X55 Y-92 W200 Z200"
#define FILAMENTCHANGE_AUTO_INSERTION_PURGE_BEFORE_EXTRACTION_LENGTH 5
#define FILAMENTCHANGE_AUTO_INSERTION_PURGE_FEEDRATE_FACTOR 0.05
#define FILAMENTCHANGE_AUTO_INSERTION_PURGE_LENGTH 30
#define FILAMENTCHANGE_AUTO_INSERTION_CONFIRMATION_LENGTH 40
#define FILAMENTCHANGE_AUTO_INSERTION_PREAMBLE_FEEDRATE_FACTOR 0.25
#define FILAMENTCHANGE_AUTO_INSERTION_VERIFICATION_LENGTH_MM 0.5

#define SECOND_RETRACT_BEFORE_EJECTION 50
#define SECOND_EXTRUDE_BEFORE_EJECTION 1.5
#define FIRST_RETRACT_BEFORE_EJECTION 4
#define FIRST_EXTRUDE_BEFORE_EJECTION 10
#define LONG_PRESS_SUPPORT 
#define FILAMENT_CHANGE_E_FEEDRATE 66
#define FILAMENT_AUTO_INSERTION_VERIFICATION_LENGTH_MM 2.0
#define FILAMENT_AUTO_INSERTION_GAP 150
#define FILAMENTCHANGE_Z_HOP_MM 10.0
#define FILAMENTCHANGE_DELTA_Z_DOME_SECURITY_DISTANCE 25.0
#define FILAMENTCHANGE_TEMPERATURE 200
#define FILAMENT_AUTO_INSERTION_FINAL_FEEDRATE_FACTOR 0.01
#define FILAMENT_PRE_INSERTION_FEEDRATE_FACTOR 0.1
#define FILAMENT_PRE_INSERTION_LENGTH 40

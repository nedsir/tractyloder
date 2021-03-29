ENCODER_ENABLE = yes       # Enable the use of one or more encoders
SPLIT_TRANSPORT = mirror   # Allow to have information sent on both sides
TAP_DANCE_ENABLE = yes     # Activate tap dance
UNICODEMAP_ENABLE = yes    # Enable unicode map
COMBO_ENABLE = yes 				 # Enable combos
NKRO_ENABLE = yes 				 # Enable NKRO: any number of key-presses at once
LTO_ENABLE = yes  				 # Enable Link Time Optimization
MOUSEKEY_ENABLE = yes      # Enable mouse keys

SRC += combos.c			       # Source combos.c 

EXTRFLAGS += -flto

WPM_ENABLE = no     	     # Disable WPM measurement
BOOTLOADER = atmel-dfu


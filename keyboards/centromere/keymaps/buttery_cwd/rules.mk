MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes

TMPVAR := $(SRC)
SRC = $(filter-out sten.c, $(TMPVAR))
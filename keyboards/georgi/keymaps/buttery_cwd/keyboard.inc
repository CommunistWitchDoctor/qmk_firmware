#define CHORD_TIMEOUT 100
#define DANCE_TIMEOUT 200
$py(COMMAND_MAX_LENGTH = 5)\
#define LEADER_TIMEOUT 750
$py(LEADER_MAX_LENGTH = 5)\
#define TAP_TIMEOUT 50
$py(DYNAMIC_MACRO_MAX_LENGTH = 20)\
$py(LONG_PRESS_MULTIPLIER = 3)\
$py(layout_name = "LAYOUT_georgi")

$include(engine_path + "keyboard_macros.inc")

$internal_keycodes("TOP1, TOP2, TOP3, TOP4, TOP5, TOP6, TOP7, TOP8, TOP9, TOP10, TOP11, TOP12, BOT1, BOT2, BOT3, BOT4, BOT5, BOT6, BOT7, BOT8, BOT9, BOT10, BOT11, BOT12, THU1, THU2, THU3, THU4, THU5, THU6")

$macro(butterstick_rows, PSEUDOLAYER, INPUT_STRING)
    $nonlocal(NUM_OF_CHORDS)
    $py(separated_string = top_level_split(INPUT_STRING))

    $add_key(PSEUDOLAYER, "H_TOP1", separated_string[0])
    $add_key(PSEUDOLAYER, "H_TOP2", separated_string[1])
    $add_key(PSEUDOLAYER, "H_TOP3", separated_string[2])
    $add_key(PSEUDOLAYER, "H_TOP4", separated_string[3])
    $add_key(PSEUDOLAYER, "H_TOP5", separated_string[4])
    $add_key(PSEUDOLAYER, "H_TOP6", separated_string[5])
    $add_key(PSEUDOLAYER, "H_TOP7", separated_string[6])
    $add_key(PSEUDOLAYER, "H_TOP8", separated_string[7])
    $add_key(PSEUDOLAYER, "H_TOP9", separated_string[8])
    $add_key(PSEUDOLAYER, "H_TOP10", separated_string[9])
    $add_key(PSEUDOLAYER, "H_TOP11", separated_string[10])
    $add_key(PSEUDOLAYER, "H_TOP12", separated_string[11])
    $add_key(PSEUDOLAYER, "H_TOP1 + H_BOT1", separated_string[12])
    $add_key(PSEUDOLAYER, "H_TOP2 + H_BOT2", separated_string[13])
    $add_key(PSEUDOLAYER, "H_TOP3 + H_BOT3", separated_string[14])
    $add_key(PSEUDOLAYER, "H_TOP4 + H_BOT4", separated_string[15])
    $add_key(PSEUDOLAYER, "H_TOP5 + H_BOT5", separated_string[16])
    $add_key(PSEUDOLAYER, "H_TOP6 + H_BOT6", separated_string[17])
    $add_key(PSEUDOLAYER, "H_TOP7 + H_BOT7", separated_string[18])
    $add_key(PSEUDOLAYER, "H_TOP8 + H_BOT8", separated_string[19])
    $add_key(PSEUDOLAYER, "H_TOP9 + H_BOT9", separated_string[20])
    $add_key(PSEUDOLAYER, "H_TOP10 + H_BOT10", separated_string[21])
    $add_key(PSEUDOLAYER, "H_TOP11 + H_BOT11", separated_string[22])
    $add_key(PSEUDOLAYER, "H_TOP12 + H_BOT12", separated_string[23])
    $add_key(PSEUDOLAYER, "H_BOT1", separated_string[24])
    $add_key(PSEUDOLAYER, "H_BOT2", separated_string[25])
    $add_key(PSEUDOLAYER, "H_BOT3", separated_string[26])
    $add_key(PSEUDOLAYER, "H_BOT4", separated_string[27])
    $add_key(PSEUDOLAYER, "H_BOT5", separated_string[28])
    $add_key(PSEUDOLAYER, "H_BOT6", separated_string[29])
    $add_key(PSEUDOLAYER, "H_BOT7", separated_string[30])
    $add_key(PSEUDOLAYER, "H_BOT8", separated_string[31])
    $add_key(PSEUDOLAYER, "H_BOT9", separated_string[32])
    $add_key(PSEUDOLAYER, "H_BOT10", separated_string[33])
    $add_key(PSEUDOLAYER, "H_BOT11", separated_string[34])
    $add_key(PSEUDOLAYER, "H_BOT12", separated_string[35])
    $add_key(PSEUDOLAYER, "H_THU1", separated_string[36])
    $add_key(PSEUDOLAYER, "H_THU2", separated_string[37])
    $add_key(PSEUDOLAYER, "H_THU3", separated_string[38])
    $add_key(PSEUDOLAYER, "H_THU4", separated_string[39])
    $add_key(PSEUDOLAYER, "H_THU5", separated_string[40])
    $add_key(PSEUDOLAYER, "H_THU6", separated_string[41])
$endmacro

$macro(butterstick_cols, PSEUDOLAYER, INPUT_STRING)
    $nonlocal(NUM_OF_CHORDS)
    $py(separated_string = top_level_split(INPUT_STRING))
    $nonlocal(NUM_OF_CHORDS)

    $add_key(PSEUDOLAYER, "H_TOP1 + H_TOP2", separated_string[0])
    $add_key(PSEUDOLAYER, "H_TOP2 + H_TOP3", separated_string[1])
    $add_key(PSEUDOLAYER, "H_TOP3 + H_TOP4", separated_string[2])
    $add_key(PSEUDOLAYER, "H_TOP4 + H_TOP5", separated_string[3])
    $add_key(PSEUDOLAYER, "H_TOP5 + H_TOP6", separated_string[4])
    $add_key(PSEUDOLAYER, "H_TOP6 + H_TOP7", separated_string[5])
    $add_key(PSEUDOLAYER, "H_TOP7 + H_TOP8", separated_string[6])
    $add_key(PSEUDOLAYER, "H_TOP8 + H_TOP9", separated_string[7])
    $add_key(PSEUDOLAYER, "H_TOP9 + H_TOP10", separated_string[8])
    $add_key(PSEUDOLAYER, "H_TOP10 + H_TOP11", separated_string[9])
    $add_key(PSEUDOLAYER, "H_TOP11 + H_TOP12", separated_string[10])
    $add_key(PSEUDOLAYER, "H_TOP1 + H_BOT1 + H_TOP2 + H_BOT2", separated_string[11])
    $add_key(PSEUDOLAYER, "H_TOP2 + H_BOT2 + H_TOP3 + H_BOT3", separated_string[12])
    $add_key(PSEUDOLAYER, "H_TOP3 + H_BOT3 + H_TOP4 + H_BOT4", separated_string[13])
    $add_key(PSEUDOLAYER, "H_TOP4 + H_BOT4 + H_TOP5 + H_BOT5", separated_string[14])
    $add_key(PSEUDOLAYER, "H_TOP5 + H_BOT5 + H_TOP6 + H_BOT6", separated_string[15])
    $add_key(PSEUDOLAYER, "H_TOP6 + H_BOT6 + H_TOP7 + H_BOT7", separated_string[16])
    $add_key(PSEUDOLAYER, "H_TOP7 + H_BOT7 + H_TOP8 + H_BOT8", separated_string[17])
    $add_key(PSEUDOLAYER, "H_TOP8 + H_BOT8 + H_TOP9 + H_BOT9", separated_string[18])
    $add_key(PSEUDOLAYER, "H_TOP9 + H_BOT9 + H_TOP10 + H_BOT10", separated_string[19])
    $add_key(PSEUDOLAYER, "H_TOP10 + H_BOT10 + H_TOP11 + H_BOT11", separated_string[20])
    $add_key(PSEUDOLAYER, "H_TOP11 + H_BOT11 + H_TOP12 + H_BOT12", separated_string[21])
    $add_key(PSEUDOLAYER, "H_BOT1 + H_BOT2", separated_string[22])
    $add_key(PSEUDOLAYER, "H_BOT2 + H_BOT3", separated_string[23])
    $add_key(PSEUDOLAYER, "H_BOT3 + H_BOT4", separated_string[24])
    $add_key(PSEUDOLAYER, "H_BOT4 + H_BOT5", separated_string[25])
    $add_key(PSEUDOLAYER, "H_BOT5 + H_BOT6", separated_string[26])
    $add_key(PSEUDOLAYER, "H_BOT6 + H_BOT7", separated_string[27])
    $add_key(PSEUDOLAYER, "H_BOT7 + H_BOT8", separated_string[28])
    $add_key(PSEUDOLAYER, "H_BOT8 + H_BOT9", separated_string[29])
    $add_key(PSEUDOLAYER, "H_BOT9 + H_BOT10", separated_string[30])
    $add_key(PSEUDOLAYER, "H_BOT10 + H_BOT11", separated_string[31])
    $add_key(PSEUDOLAYER, "H_BOT11 + H_BOT12", separated_string[32])
    $add_key(PSEUDOLAYER, "H_THU1 + H_THU2", separated_string[33])
    $add_key(PSEUDOLAYER, "H_THU2 + H_THU3", separated_string[34])
    $add_key(PSEUDOLAYER, "H_THU3 + H_THU4", separated_string[35])
    $add_key(PSEUDOLAYER, "H_THU4 + H_THU5", separated_string[36])
    $add_key(PSEUDOLAYER, "H_THU5 + H_THU6", separated_string[37])
$endmacro

$macro(secret_chord, PSEUDOLAYER, ACTION, INPUT_STRING)
    $nonlocal(NUM_OF_CHORDS)
    $py(separated_string = top_level_split(INPUT_STRING))
    $py(hash = "")
    $if(separated_string[0] != "")
        $py(hash = hash + " + H_TOP1")
    $endif
    $if(separated_string[1] != "")
        $py(hash = hash + " + H_TOP2")
    $endif
    $if(separated_string[2] != "")
        $py(hash = hash + " + H_TOP3")
    $endif
    $if(separated_string[3] != "")
        $py(hash = hash + " + H_TOP4")
    $endif
    $if(separated_string[4] != "")
        $py(hash = hash + " + H_TOP5")
    $endif
    $if(separated_string[5] != "")
        $py(hash = hash + " + H_TOP6")
    $endif
    $if(separated_string[6] != "")
        $py(hash = hash + " + H_TOP7")
    $endif
    $if(separated_string[7] != "")
        $py(hash = hash + " + H_TOP8")
    $endif
    $if(separated_string[8] != "")
        $py(hash = hash + " + H_TOP9")
    $endif
    $if(separated_string[9] != "")
        $py(hash = hash + " + H_TOP10")
    $endif
    $if(separated_string[10] != "")
        $py(hash = hash + " + H_TOP11")
    $endif
    $if(separated_string[11] != "")
        $py(hash = hash + " + H_TOP12")
    $endif
    $if(separated_string[12] != "")
        $py(hash = hash + " + H_BOT1")
    $endif
    $if(separated_string[13] != "")
        $py(hash = hash + " + H_BOT2")
    $endif
    $if(separated_string[14] != "")
        $py(hash = hash + " + H_BOT3")
    $endif
    $if(separated_string[15] != "")
        $py(hash = hash + " + H_BOT4")
    $endif
    $if(separated_string[16] != "")
        $py(hash = hash + " + H_BOT5")
    $endif
    $if(separated_string[17] != "")
        $py(hash = hash + " + H_BOT6")
    $endif
    $if(separated_string[18] != "")
        $py(hash = hash + " + H_BOT7")
    $endif
    $if(separated_string[19] != "")
        $py(hash = hash + " + H_BOT8")
    $endif
    $if(separated_string[20] != "")
        $py(hash = hash + " + H_BOT9")
    $endif
    $if(separated_string[21] != "")
        $py(hash = hash + " + H_BOT10")
    $endif
    $if(separated_string[22] != "")
        $py(hash = hash + " + H_BOT11")
    $endif
    $if(separated_string[23] != "")
        $py(hash = hash + " + H_BOT12")
    $endif
    $if(separated_string[24] != "")
        $py(hash = hash + " + H_THU1")
    $endif
    $if(separated_string[25] != "")
        $py(hash = hash + " + H_THU2")
    $endif
    $if(separated_string[26] != "")
        $py(hash = hash + " + H_THU3")
    $endif
    $if(separated_string[27] != "")
        $py(hash = hash + " + H_THU4")
    $endif
    $if(separated_string[28] != "")
        $py(hash = hash + " + H_THU5")
    $endif
    $if(separated_string[29] != "")
        $py(hash = hash + " + H_THU6")
    $endif
    $py(hash = hash[3:])
    $if(hash != "")
        $add_key(PSEUDOLAYER, hash, ACTION)
    $endif
$endmacro

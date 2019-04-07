#ifndef XDR_CONF_DEFAULTS_H_
#define XDR_CONF_DEFAULTS_H_

/* Window */
#define CONF_WINDOW_X -1
#define CONF_WINDOW_Y -1

/* Connection */
#define CONF_CONNECTION_NETWORK  FALSE
#ifdef G_OS_WIN32
#define CONF_CONNECTION_SERIAL   "COM3"
#else
#define CONF_CONNECTION_SERIAL   "ttyUSB0"
#endif
#define CONF_CONNECTION_HOST     "localhost"
#define CONF_CONNECTION_PORT     7373
#define CONF_CONNECTION_PASSWORD ""

/* Tuner settings */
#define CONF_TUNER_VOLUME     100
#define CONF_TUNER_RFGAIN     FALSE
#define CONF_TUNER_IFGAIN     FALSE
#define CONF_TUNER_AGC        2
#define CONF_TUNER_DEEMPHASIS 0

/* Interface */
#define CONF_INTERFACE_INITIAL_FREQ        87500
#define CONF_INTERFACE_FREQ_OFFSET         0
#define CONF_INTERFACE_EVENT_ACTION        ACTION_NONE
#define CONF_INTERFACE_UTC                 TRUE
#define CONF_INTERFACE_MW_10K_STEPS        FALSE
#define CONF_INTERFACE_AUTO_CONNECT        FALSE
#define CONF_INTERFACE_DISCONNECT_CONFIRM  FALSE
#define CONF_INTERFACE_AUTO_RECONNECT      FALSE
#define CONF_INTERFACE_HIDE_DECORATIONS    FALSE
#define CONF_INTERFACE_HIDE_INTERFERENCE   FALSE
#define CONF_INTERFACE_HIDE_RADIOTEXT      FALSE
#define CONF_INTERFACE_HIDE_STATUSBAR      FALSE
#define CONF_INTERFACE_RESTORE_POSITION    TRUE
#define CONF_INTERFACE_GRAB_FOCUS          FALSE
#define CONF_INTERFACE_TITLE_TUNER_INFO    FALSE
#define CONF_INTERFACE_ACCESSIBILITY       FALSE
#define CONF_INTERFACE_HORIZONTAL_AF       FALSE

/* Signal */
#define CONF_SIGNAL_OFFSET       0.0
#define CONF_SIGNAL_UNIT         UNIT_DBF
#define CONF_SIGNAL_DISPLAY      SIGNAL_GRAPH
#define CONF_SIGNAL_MODE         GRAPH_DEFAULT
#define CONF_SIGNAL_HEIGHT       100
#define CONF_SIGNAL_GRID         TRUE
#define CONF_SIGNAL_AVG          FALSE
#define CONF_SIGNAL_COLOR_MONO   "#B5B5FF"
#define CONF_SIGNAL_COLOR_STEREO "#8080FF"
#define CONF_SIGNAL_COLOR_RDS    "#3333FF"

/* RDS */
#define CONF_RDS_PTY_SET        RDS
#define CONF_RDS_RESET          FALSE
#define CONF_RDS_RESET_TIMEOUT  60
#define CONF_RDS_PS_INFO_ERROR  UP_TO_5_BIT_ERR_CORR
#define CONF_RDS_PS_DATA_ERROR  UP_TO_2_BIT_ERR_CORR
#define CONF_RDS_PS_PROGRESSIVE FALSE
#define CONF_RDS_RT_INFO_ERROR  NO_ERR_CORR
#define CONF_RDS_RT_DATA_ERROR  NO_ERR_CORR

/* Antenna */
#define CONF_ANTENNA_SHOW_ALIGNMENT FALSE
#define CONF_ANTENNA_SWAP_ROTATOR   FALSE
#define CONF_ANTENNA_COUNT          ANT_COUNT
#define CONF_ANTENNA_CLEAR_RDS      TRUE
#define CONF_ANTENNA_AUTO_SWITCH    FALSE

/* Logs */
#define CONF_LOGS_RDSSPY_PORT    7376
#define CONF_LOGS_RDSSPY_AUTO    FALSE
#define CONF_LOGS_RDSSPY_RUN     FALSE
#define CONF_LOGS_RDSSPY_EXEC    ""
#define CONF_LOGS_SRCP           FALSE
#define CONF_LOGS_SRCP_PORT      9031
#define CONF_LOGS_RDS_LOGGING    FALSE
#define CONF_LOGS_REPLACE_SPACES TRUE
#define CONF_LOGS_LOG_DIR        ""
#define CONF_LOGS_SCREEN_DIR     ""

/* Keyboard */
#define CONF_KEY_TUNE_UP        GDK_Right
#define CONF_KEY_TUNE_DOWN      GDK_Left
#define CONF_KEY_FINE_TUNE_UP   GDK_Up
#define CONF_KEY_FINE_TUNE_DOWN GDK_Down
#define CONF_KEY_JUMP_TUNE_UP   GDK_Page_Up
#define CONF_KEY_JUMP_TUNE_DOWN GDK_Page_Down
#define CONF_KEY_TUNE_BACK      GDK_B
#define CONF_KEY_TUNE_RESET     GDK_R
#define CONF_KEY_SCREENSHOT     GDK_S
#define CONF_KEY_BW_UP          GDK_KEY_bracketright
#define CONF_KEY_BW_DOWN        GDK_KEY_bracketleft
#define CONF_KEY_BW_AUTO        GDK_KEY_backslash
#define CONF_KEY_ROTATE_CW      GDK_KEY_Home
#define CONF_KEY_ROTATE_CCW     GDK_KEY_End
#define CONF_KEY_SWITCH_ANTENNA GDK_KEY_Delete
#define CONF_KEY_RDS_PS_MODE    GDK_KEY_grave
#define CONF_KEY_SCAN_TOGGLE    GDK_KEY_Q
#define CONF_KEY_SCAN_PREV      GDK_KEY_less
#define CONF_KEY_SCAN_NEXT      GDK_KEY_greater
#define CONF_KEY_STEREO_TOGGLE  GDK_KEY_M

/* Presets */
#define CONF_PRESET_1   87600
#define CONF_PRESET_2   89400
#define CONF_PRESET_3   91300
#define CONF_PRESET_4   93100
#define CONF_PRESET_5   95000
#define CONF_PRESET_6   96800
#define CONF_PRESET_7   98600
#define CONF_PRESET_8  100500
#define CONF_PRESET_9  102400
#define CONF_PRESET_10 104200
#define CONF_PRESET_11 106100
#define CONF_PRESET_12 107900

/* Scheduler */
#define CONF_SCHEDULER_TIMEOUT 30

/* Pattern */
#define CONF_PATTERN_COLOR 3
#define CONF_PATTERN_SIZE  600
#define CONF_PATTERN_INV   FALSE
#define CONF_PATTERN_FILL  TRUE
#define CONF_PATTERN_AVG   FALSE

/* Spectral scan */
#define CONF_SCAN_X          -1
#define CONF_SCAN_Y          -1
#define CONF_SCAN_WIDTH      950
#define CONF_SCAN_HEIGHT     150
#define CONF_SCAN_START      87500
#define CONF_SCAN_END        108000
#define CONF_SCAN_STEP       100
#define CONF_SCAN_BW         12
#define CONF_SCAN_CONTINOUS  FALSE
#define CONF_SCAN_RELATIVE   FALSE
#define CONF_SCAN_PEAKHOLD   TRUE
#define CONF_SCAN_MARK_TUNED TRUE
#define CONF_SCAN_UPDATE     TRUE

#endif

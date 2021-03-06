#include <stdint.h>
#include "guimenu.h"
#include "MenuDefines.h"
#include "Menu.h"

#include "LongExposureHDR.h"
#include "guimenu_pages.h"

MENU_NEXTSTATE menu_nextstate[] = 
{
	// Main Menu States
	{	
		ST_TMLPSE,
		{
			ST_TMLPSE,				// KEY_NULL
			ST_TMLPSE,				// KEY_MINUS
			ST_TMLPSE_START,		// KEY_SELECT
			ST_TMLPSE,				// KEY_PREV
			ST_TMLPSE,				// KEY_PLUS
			ST_TIMEWARP				// KEY_DOWN
		}	
	},
	{
		ST_TIMEWARP,
		{
			ST_TIMEWARP,		// KEY_NULL
			ST_TIMEWARP,		// KEY_MINUS
			ST_TIMEWARP_START,	// KEY_SELECT
			ST_TMLPSE,			// KEY_PREV	
			ST_TIMEWARP,		// KEY_PLUS
			ST_BULBRAMP			// KEY_DOWN
		}
	},
	{
		ST_BULBRAMP,
		{
			ST_BULBRAMP,		// KEY_NULL
			ST_BULBRAMP,		// KEY_MINUS
			ST_BULBRAMP_START,	// KEY_SELECT
			ST_TIMEWARP,		// KEY_PREV	
			ST_BULBRAMP,		// KEY_PLUS
			ST_STARTRAIL		// KEY_DOWN
		}
	},
	{
		ST_STARTRAIL,
		{
			ST_STARTRAIL,		// KEY_NULL
			ST_STARTRAIL,		// KEY_MINUS
			ST_STARTRAIL_START,	// KEY_SELECT
			ST_BULBRAMP,		// KEY_PREV
			ST_STARTRAIL,		// KEY_PLUS
			ST_HSF				// KEY_DOWN
		}
	},
	{
		ST_HSF,
		{
			ST_HSF,				// KEY_NULL
			ST_HSF,				// KEY_MINUS
			ST_HSF_START,		// KEY_SELECT
			ST_STARTRAIL,		// KEY_PREV
			ST_HSF,				// KEY_PLUS
			ST_SEN				// KEY_DOWN
		}
	},
	{
			ST_SEN,
			{
				ST_SEN,				// KEY_NULL
				ST_SEN,				// KEY_MINUS
				ST_SENSOR_START,				// KEY_SELECT
				ST_HSF,				// KEY_PREV
				ST_SEN,				// KEY_PLUS
				ST_SEN_TL			// KEY_DOWN
			}
	},
	{
		ST_SEN_TL,
		{
			ST_SEN_TL,		// KEY_NULL
			ST_SEN_TL,		// KEY_MINUS
			ST_SEN_TL_START,		// KEY_SELECT 
			ST_SEN,				// KEY_PREV
			ST_SEN_TL,		// KEY_PLUS
			ST_SENSVIDEO		// KEY_DOWN
		}
	},
	{
		ST_SENSVIDEO,
		{
			ST_SENSVIDEO,		// KEY_NULL
			ST_SENSVIDEO,		// KEY_MINUS
			ST_SENSORVIDEO_START,// KEY_SELECT
			ST_SEN_TL,		// KEY_PREV
			ST_SENSVIDEO,		// KEY_PLUS
			ST_ADVANCESENS		// KEY_DOWN
		}
	},
	{
		ST_ADVANCESENS,
		{
			ST_ADVANCESENS,		// KEY_NULL
			ST_ADVANCESENS,		// KEY_MINUS
			ST_A_SENSOR_START,		// KEY_SELECT
			ST_SENSVIDEO,		// KEY_PREV
			ST_ADVANCESENS,		// KEY_PLUS
			ST_LEHDR			// KEY_DOWN
		}
	},
	{
		ST_LEHDR,
		{
			ST_LEHDR,			// KEY_NULL
			ST_LEHDR,			// KEY_MINUS
			ST_LEHDR_START,		// KEY_SELECT
			ST_ADVANCESENS,		// KEY_PREV
			ST_LEHDR,			// KEY_PLUS
#ifndef INCLUDE_NEWMODE
			ST_SETTINGS			// KEY_DOWN
#else
			ST_NEWMODE			// KEY_DOWN
#endif
		}
	},
	{
		ST_SETTINGS,
		{
			ST_SETTINGS,			// KEY_NULL
			ST_SETTINGS,			// KEY_MINUS
			ST_SETTINGS_OP_PREFOCUS,// KEY_SELECT
#ifndef INCLUDE_NEWMODE
			ST_LEHDR,				// KEY_PREV	
#else
			ST_NEWMODE,				// KEY_PREV
#endif
			ST_SETTINGS,			// KEY_PLUS
			ST_OFF					// KEY_DOWN
		}
	},
	{
		ST_OFF,
		{
			ST_OFF,				// KEY_NULL
			ST_OFF,				// KEY_MINUS
			ST_OFF_FUNC,		// KEY_SELECT
			ST_SETTINGS,		// KEY_PREV	
			ST_OFF,				// KEY_PLUS
			ST_OFF				// KEY_DOWN
		}
	},		
	
	
	
		{
			ST_SENSOR_START,
			{
				ST_SENSOR_START,				// KEY_NULL
				ST_SEN,				// KEY_MINUS
				ST_SENSOR_CONFIG_PROGESS,				// KEY_SELECT
				ST_SENSOR_START,				// KEY_PREV
				ST_SENSOR_START,				// KEY_PLUS
				ST_SENSOR_TRIGGER_DELAY		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_CONFIG_PROGESS,
			{
				ST_SENSOR_CONFIG_PROGESS,				// KEY_NULL
				ST_SENSOR_CONFIG_PROGESS,				// KEY_MINUS
				ST_SENSOR_CONFIG_PROGESS,				// KEY_SELECT
				ST_SENSOR_CONFIG_PROGESS,				// KEY_PREV
				ST_SENSOR_CONFIG_PROGESS,				// KEY_PLUS
				ST_SENSOR_CONFIG_PROGESS		// KEY_DOWN
			}
		},
		
		{
			ST_SENSOR_STOP,
			{
				ST_SENSOR_STOP,				// KEY_NULL
				ST_SENSOR_STOP,				// KEY_MINUS
				ST_SENSOR_START,				// KEY_SELECT
				ST_SENSOR_STOP,				// KEY_PREV
				ST_SENSOR_STOP,				// KEY_PLUS
				ST_SENSOR_STOP		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_TRIGGER_DELAY,
			{
				ST_SENSOR_TRIGGER_DELAY,				// KEY_NULL
				ST_SENSOR_TRIGGER_DELAY,				// KEY_MINUS
				ST_SENSOR_TRIGGER_DELAY,				// KEY_SELECT
				ST_SENSOR_START,				// KEY_PREV
				ST_SENSOR_TRIGGER_DELAY,				// KEY_PLUS
				ST_SENSOR_RESET_DELAY		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_RESET_DELAY,
			{
				ST_SENSOR_RESET_DELAY,				// KEY_NULL
				ST_SENSOR_RESET_DELAY,				// KEY_MINUS
				ST_SENSOR_RESET_DELAY,				// KEY_SELECT
				ST_SENSOR_TRIGGER_DELAY,				// KEY_PREV
				ST_SENSOR_RESET_DELAY,				// KEY_PLUS
				ST_SENSOR_TRIGGER_ON		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_TRIGGER_ON,
			{
				ST_SENSOR_TRIGGER_ON,				// KEY_NULL
				ST_SENSOR_TRIGGER_ON,				// KEY_MINUS
				ST_SENSOR_TRIGGER_ON,				// KEY_SELECT
				ST_SENSOR_RESET_DELAY,				// KEY_PREV
				ST_SENSOR_TRIGGER_ON,				// KEY_PLUS
				ST_SENSOR_MOBILE_INPUT		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_MOBILE_INPUT,
			{
				ST_SENSOR_MOBILE_INPUT,				// KEY_NULL
				ST_SENSOR_MOBILE_INPUT,				// KEY_MINUS
				ST_SENSOR_MOBILE_INPUT,				// KEY_SELECT
				ST_SENSOR_TRIGGER_ON,				// KEY_PREV
				ST_SENSOR_MOBILE_INPUT,				// KEY_PLUS
				ST_SENSOR_MOBILE_OUTPUT		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_MOBILE_OUTPUT,
			{
				ST_SENSOR_MOBILE_OUTPUT,				// KEY_NULL
				ST_SENSOR_MOBILE_OUTPUT,				// KEY_MINUS
				ST_SENSOR_MOBILE_OUTPUT,				// KEY_SELECT
				ST_SENSOR_MOBILE_INPUT,				// KEY_PREV
				ST_SENSOR_MOBILE_OUTPUT,				// KEY_PLUS
				ST_SENSOR_TIME_ACTIVE		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_TIME_ACTIVE,
			{
				ST_SENSOR_TIME_ACTIVE,				// KEY_NULL
				ST_SENSOR_TIME_ACTIVE,				// KEY_MINUS
				ST_SENSOR_TIME_ACTIVE,				// KEY_SELECT
				ST_SENSOR_MOBILE_OUTPUT,				// KEY_PREV
				ST_SENSOR_TIME_ACTIVE,				// KEY_PLUS
				ST_SENSOR_START_TIME		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_START_TIME,
			{
				ST_SENSOR_START_TIME,				// KEY_NULL
				ST_SENSOR_START_TIME,				// KEY_MINUS
				ST_SENSOR_START_TIME,				// KEY_SELECT
				ST_SENSOR_TIME_ACTIVE,				// KEY_PREV
				ST_SENSOR_START_TIME,				// KEY_PLUS
				ST_SENSOR_STOP_TIME		// KEY_DOWN
			}
		},
		{
			ST_SENSOR_STOP_TIME,
			{
				ST_SENSOR_STOP_TIME,				// KEY_NULL
				ST_SENSOR_STOP_TIME,				// KEY_MINUS
				ST_SENSOR_STOP_TIME,				// KEY_SELECT
				ST_SENSOR_START_TIME,				// KEY_PREV
				ST_SENSOR_STOP_TIME,				// KEY_PLUS
				ST_SENSOR_STOP_TIME		// KEY_DOWN
			}
		},
		{
			ST_SEN_TL_START,
			{
				ST_SEN_TL_START,				// KEY_NULL
				ST_SEN_TL,					// KEY_MINUS
				ST_SEN_TL_CONFIG_PROGESS,//ST_SENSOR_TL_PROGBAR,				// KEY_SELECT
				ST_SEN_TL_START,				// KEY_PREV
				ST_SEN_TL_START,				// KEY_PLUS
				ST_SEN_TL_DELAY				// KEY_DOWN
			}
		},
		
		{
			ST_SEN_TL_CONFIG_PROGESS,
			{
				ST_SEN_TL_CONFIG_PROGESS,				// KEY_NULL
				ST_SEN_TL_CONFIG_PROGESS,					// KEY_MINUS
				ST_SEN_TL_CONFIG_PROGESS,				// KEY_SELECT
				ST_SEN_TL_CONFIG_PROGESS,				// KEY_PREV
				ST_SEN_TL_CONFIG_PROGESS,				// KEY_PLUS
				ST_SEN_TL_CONFIG_PROGESS				// KEY_DOWN
			}
		},

		{
			ST_SEN_TL_STOP,
			{
				ST_SEN_TL_STOP,				// KEY_NULL
				ST_SEN_TL_START,				// KEY_MINUS
				ST_SEN_TL_STOP,				// KEY_SELECT
				ST_SEN_TL_STOP,				// KEY_PREV
				ST_SEN_TL_STOP,				// KEY_PLUS
				ST_SEN_TL_STOP				// KEY_DOWN
			}
		},
		{
			ST_SEN_TL_DELAY,
			{
				ST_SEN_TL_DELAY,				// KEY_NULL
				ST_SEN_TL_DELAY,				// KEY_MINUS
				ST_SEN_TL_DELAY,				// KEY_SELECT
				ST_SEN_TL_START,				// KEY_PREV
				ST_SEN_TL_DELAY,				// KEY_PLUS
				ST_SEN_TL_INTERVAL		// KEY_DOWN
			}
		},
		{
			ST_SEN_TL_INTERVAL,
			{
				ST_SEN_TL_INTERVAL,				// KEY_NULL
				ST_SEN_TL_INTERVAL,				// KEY_MINUS
				ST_SEN_TL_INTERVAL,				// KEY_SELECT
				ST_SEN_TL_DELAY,				// KEY_PREV
				ST_SEN_TL_INTERVAL,				// KEY_PLUS
				ST_SEN_TL_CONTINUE_SET		// KEY_DOWN
			}
		},

		{
			ST_SEN_TL_CONTINUE,
			{
				ST_SEN_TL_CONTINUE,				// KEY_NULL
				ST_SEN_TL_CONTINUE,				// KEY_MINUS
				ST_SEN_TL_CONTINUE,				// KEY_SELECT
				ST_SEN_TL_CONTINUE_SET,				// KEY_PREV
				ST_SEN_TL_CONTINUE,				// KEY_PLUS
				ST_SEN_TL_TRIGGER		// KEY_DOWN
			}
		},

		{
			ST_SEN_TL_TRIGGER,
			{
				ST_SEN_TL_TRIGGER,				// KEY_NULL
				ST_SEN_TL_TRIGGER,				// KEY_MINUS
				ST_SEN_TL_TRIGGER,				// KEY_SELECT
				ST_SEN_TL_INTERVAL,				// KEY_PREV
				ST_SEN_TL_TRIGGER,				// KEY_PLUS
				ST_SEN_TL_MOBILE_INPUT		// KEY_DOWN
			}
		},

		{
			ST_SEN_TL_MOBILE_INPUT,
			{
				ST_SEN_TL_MOBILE_INPUT,				// KEY_NULL
				ST_SEN_TL_MOBILE_INPUT,				// KEY_MINUS
				ST_SEN_TL_MOBILE_INPUT,				// KEY_SELECT
				ST_SEN_TL_TRIGGER,				// KEY_PREV
				ST_SEN_TL_MOBILE_INPUT,				// KEY_PLUS
				ST_SEN_TL_MOBILE_OUTPUT		// KEY_DOWN
			}
		},

		{
			ST_SEN_TL_MOBILE_OUTPUT,
			{
				ST_SEN_TL_MOBILE_OUTPUT,				// KEY_NULL
				ST_SEN_TL_MOBILE_OUTPUT,				// KEY_MINUS
				ST_SEN_TL_MOBILE_OUTPUT,				// KEY_SELECT
				ST_SEN_TL_MOBILE_INPUT,				// KEY_PREV
				ST_SEN_TL_MOBILE_OUTPUT,				// KEY_PLUS
				ST_SEN_TL_TIME_ACTIVE		// KEY_DOWN
			}
		},

		{
			ST_SEN_TL_TIME_ACTIVE,
			{
				ST_SEN_TL_TIME_ACTIVE,				// KEY_NULL
				ST_SEN_TL_TIME_ACTIVE,				// KEY_MINUS
				ST_SEN_TL_TIME_ACTIVE,				// KEY_SELECT
				ST_SEN_TL_MOBILE_OUTPUT,				// KEY_PREV
				ST_SEN_TL_TIME_ACTIVE,				// KEY_PLUS
				ST_SEN_TL_START_TIME		// KEY_DOWN
			}
		},
		{
			ST_SEN_TL_START_TIME,
			{
				ST_SEN_TL_START_TIME,				// KEY_NULL
				ST_SEN_TL_START_TIME,				// KEY_MINUS
				ST_SEN_TL_START_TIME,				// KEY_SELECT
				ST_SEN_TL_TIME_ACTIVE,				// KEY_PREV
				ST_SEN_TL_START_TIME,				// KEY_PLUS
				ST_SEN_TL_STOP_TIME		// KEY_DOWN
			}
		},
		{
			ST_SEN_TL_STOP_TIME,
			{
				ST_SEN_TL_STOP_TIME,				// KEY_NULL
				ST_SEN_TL_STOP_TIME,				// KEY_MINUS
				ST_SEN_TL_STOP_TIME,				// KEY_SELECT
				ST_SEN_TL_START_TIME,				// KEY_PREV
				ST_SEN_TL_STOP_TIME,				// KEY_PLUS
				ST_SEN_TL_STOP_TIME		// KEY_DOWN
			}
		},
		{
			ST_SEN_TL_CONTINUE_SET,
			{
				ST_SEN_TL_CONTINUE_SET,				// KEY_NULL
				ST_SEN_TL_CONTINUE_SET,				// KEY_MINUS
				ST_SEN_TL_CONTINUE_SET,				// KEY_SELECT
				ST_SEN_TL_INTERVAL,				// KEY_PREV
				ST_SEN_TL_CONTINUE_SET,				// KEY_PLUS
				ST_SEN_TL_CONTINUE		// KEY_DOWN
			}
		},
	
	{	
		ST_TMLPSE_START,
		{
			ST_TMLPSE_START,		// KEY_NULL
			ST_TMLPSE,				// KEY_MINUS
			ST_TMLPSE_PROGBAR,		// KEY_SELECT
			ST_TMLPSE_START,		// KEY_PREV
			ST_TMLPSE_START,		// KEY_PLUS
			ST_TMLPSE_INTERVAL		// KEY_DOWN
		}	
	},
	{	
		ST_TMLPSE_COUNT,
		{
			ST_TMLPSE_COUNT,		// KEY_NULL
			ST_TMLPSE_COUNT,		// KEY_MINUS
			ST_TMLPSE_COUNT,		// KEY_SELECT
			ST_TMLPSE_START,		// KEY_PREV
			ST_TMLPSE_COUNT,		// KEY_PLUS
			ST_TMLPSE_START_DELAY	// KEY_DOWN
		}	
	},
	{
		ST_TMLPSE_INTERVAL,
		{
			ST_TMLPSE_INTERVAL,	// KEY_NULL
			ST_TMLPSE_INTERVAL,	// KEY_MINUS
			ST_TMLPSE_INTERVAL,	// KEY_SELECT
			ST_TMLPSE_START,	// KEY_PREV
			ST_TMLPSE_INTERVAL,	// KEY_PLUS
			ST_TMLPSE_COUNT		// KEY_DOWN
		}
	},
	{
		ST_TMLPSE_START_DELAY,
		{
			ST_TMLPSE_START_DELAY,	// KEY_NULL
			ST_TMLPSE_START_DELAY,	// KEY_MINUS
			ST_TMLPSE_START_DELAY,	// KEY_SELECT
			ST_TMLPSE_START_DELAY,	// KEY_PREV
			ST_TMLPSE_START_DELAY,	// KEY_PLUS
			ST_TMLPSE_ACTIVE		// KEY_DOWN
		}
	},
	{
		ST_TMLPSE_ACTIVE,
		{
			ST_TMLPSE_ACTIVE,	// KEY_NULL
			ST_TMLPSE_ACTIVE,	// KEY_MINUS
			ST_TMLPSE_ACTIVE,	// KEY_SELECT
			ST_TMLPSE_ACTIVE,	// KEY_PREV
			ST_TMLPSE_ACTIVE,	// KEY_PLUS
			ST_TMLPSE_ACTIVE	// KEY_DOWN
		}
	},
	
	{
		ST_BULBRAMP_START,
		{
			ST_BULBRAMP_START,	// KEY_NULL
			ST_BULBRAMP,		// KEY_MINUS
			ST_BULBRAMP_PROGBAR,	// KEY_SELECT
			ST_BULBRAMP_START,	// KEY_PREV
			ST_BULBRAMP_START,	// KEY_PLUS
			ST_BULBRAMP_START_EXP	// KEY_DOWN
		}
	},
	{
		ST_BULBRAMP_COUNT,
		{
			ST_BULBRAMP_COUNT,	// KEY_NULL
			ST_BULBRAMP_COUNT,	// KEY_MINUS
			ST_BULBRAMP_COUNT,	// KEY_SELECT
			ST_BULBRAMP_DELAYSTART,	// KEY_PREV
			ST_BULBRAMP_COUNT,	// KEY_PLUS
			ST_BULBRAMP_DURATION	// KEY_DOWN
		}
	},
	{
		ST_TIMEWARP_START,
		{
			ST_TIMEWARP_START,		// KEY_NULL
			ST_TIMEWARP,			// KEY_MINUS
			ST_TIMEWARP_RUN,		// KEY_SELECT
			ST_TIMEWARP_START,		// KEY_PREV
			ST_TIMEWARP_START,		// KEY_PLUS
			ST_TIMEWARP_COUNT_SET	// KEY_DOWN
		}
	},
		{
	ST_TIMEWARP_COUNT_SET,
		{
			ST_TIMEWARP_COUNT_SET,		// KEY_NULL
			ST_TIMEWARP_COUNT_SET,		// KEY_MINUS
			ST_TIMEWARP_COUNT_SET,		// KEY_SELECT
			ST_TIMEWARP_COUNT_SET,		// KEY_PREV
			ST_TIMEWARP_COUNT_SET,		// KEY_PLUS
			ST_TIMEWARP_DURATION_SET	// KEY_DOWN
		}
	},
			
	{
		ST_SENSORVIDEO_START,
		{
			ST_SENSORVIDEO_START,// KEY_NULL
			ST_SENSVIDEO,		 // KEY_MINUS
			ST_SENSORVIDEO_CONFIG_PROGESS,// KEY_SELECT
			ST_SENSORVIDEO_START,// KEY_PREV
			ST_SENSORVIDEO_START,// KEY_PLUS
			ST_SENSORVIDEO_DELAY // KEY_DOWN
		}
	},
	
	{
		ST_SENSORVIDEO_CONFIG_PROGESS,
		{
			ST_SENSORVIDEO_CONFIG_PROGESS,// KEY_NULL
			ST_SENSORVIDEO_CONFIG_PROGESS,		 // KEY_MINUS
			ST_SENSORVIDEO_CONFIG_PROGESS,// KEY_SELECT
			ST_SENSORVIDEO_CONFIG_PROGESS,// KEY_PREV
			ST_SENSORVIDEO_CONFIG_PROGESS,// KEY_PLUS
			ST_SENSORVIDEO_CONFIG_PROGESS // KEY_DOWN
		}
	},
	
		{
			ST_SENSORVIDEO_STOP,
			{
				ST_SENSORVIDEO_STOP,// KEY_NULL
				ST_SENSORVIDEO_STOP,		 // KEY_MINUS
				ST_SENSORVIDEO_START,// KEY_SELECT
				ST_SENSORVIDEO_STOP,// KEY_PREV
				ST_SENSORVIDEO_STOP,// KEY_PLUS
				ST_SENSORVIDEO_STOP // KEY_DOWN
			}
		},
	{
		ST_SENSORVIDEO_DELAY,
		{
			ST_SENSORVIDEO_DELAY,// KEY_NULL
			ST_SENSORVIDEO_DELAY,// KEY_MINUS
			ST_SENSORVIDEO_DELAY,// KEY_SELECT
			ST_SENSORVIDEO_START,// KEY_PREV
			ST_SENSORVIDEO_DELAY,// KEY_PLUS
			ST_SENSORVIDEO_DELAY // KEY_DOWN
		}
	},
	
	{
		ST_SETTINGS_OP_PREFOCUS,
		{
			ST_SETTINGS_OP_PREFOCUS,				// KEY_NULL
			ST_SETTINGS,							// KEY_MINUS
			ST_SETTINGS_OP_PREFOCUS,				// KEY_SELECT
			ST_SETTINGS_OP_PREFOCUS,				// KEY_PREV	
			ST_SETTINGS_OP_PREFOCUS,				// KEY_PLUS
			ST_SETTINGS_OP_SHTPLSE					// KEY_DOWN
		}
	},	
	{
		ST_SETTINGS_OP_SHTPLSE,
		{
			ST_SETTINGS_OP_SHTPLSE,				// KEY_NULL
			ST_SETTINGS_OP_SHTPLSE,				// KEY_MINUS
			ST_SETTINGS_OP_SHTPLSE,				// KEY_SELECT
			ST_SETTINGS_OP_SHTPLSE,				// KEY_PREV	
			ST_SETTINGS_OP_SHTPLSE,				// KEY_PLUS
			ST_SETTINGS_OP_SHTPLSE				// KEY_DOWN
		}
	},	
	{
		ST_SETTINGS_OP_FLSHPLSE,
		{
			ST_SETTINGS_OP_FLSHPLSE,				// KEY_NULL
			ST_SETTINGS_OP_FLSHPLSE,				// KEY_MINUS
			ST_SETTINGS_OP_FLSHPLSE,				// KEY_SELECT
			ST_SETTINGS_OP_SHTPLSE,					// KEY_PREV	
			ST_SETTINGS_OP_FLSHPLSE,				// KEY_PLUS
			ST_SETTINGS_SETSYSTEM_TIME				// KEY_DOWN
		}
	},
	{
		ST_HSF_START,
		{
			ST_HSF_START,				// KEY_NULL
			ST_HSF,						// KEY_MINUS
			ST_HSF_CONFIG_PROGRESS,		// KEY_SELECT
			ST_HSF_START,				// KEY_PREV
			ST_HSF_START,				// KEY_PLUS
			ST_HSF_TRIGGERON_SET		// KEY_DOWN
		}
	},	
	{
		ST_HSF_CONFIG_PROGRESS,
		{
			ST_HSF_CONFIG_PROGRESS,		// KEY_NULL
			ST_HSF_CONFIG_PROGRESS,		// KEY_MINUS
			ST_HSF_CONFIG_PROGRESS,		// KEY_SELECT
			ST_HSF_CONFIG_PROGRESS,		// KEY_PREV
			ST_HSF_CONFIG_PROGRESS,		// KEY_PLUS
			ST_HSF_CONFIG_PROGRESS		// KEY_DOWN
		}
	},
	{
		ST_HSF_STOP,
		{
			ST_HSF_STOP,				// KEY_NULL
			ST_HSF_STOP,				// KEY_MINUS
			ST_HSF_START,				// KEY_SELECT
			ST_HSF_STOP,				// KEY_PREV
			ST_HSF_STOP,				// KEY_PLUS
			ST_HSF_STOP					// KEY_DOWN
		}
	},	
	{
		ST_SETTINGS_SETSYSTEM_TIME,
		{
			ST_SETTINGS_SETSYSTEM_TIME,				// KEY_NULL
			ST_SETTINGS_SETSYSTEM_TIME,				// KEY_MINUS
			ST_SETTINGS_SETSYSTEM_TIME,		// KEY_SELECT
			ST_SETTINGS_OP_FLSHPLSE,		// KEY_PREV
			ST_SETTINGS_SETSYSTEM_TIME,				// KEY_PLUS
			ST_SETTINGS_ABOUT				// KEY_DOWN
		}
	},
	{
		ST_SETTINGS_ABOUT,
		{
			ST_SETTINGS_ABOUT,				// KEY_NULL
			ST_SETTINGS_ABOUT,				// KEY_MINUS
			ST_SETTINGS_ABOUT,		// KEY_SELECT
			ST_SETTINGS_SETSYSTEM_TIME,		// KEY_PREV
			ST_SETTINGS_ABOUT,				// KEY_PLUS
			ST_SETTINGS_ABOUT				// KEY_DOWN
		}
	},
	

	{
			ST_STARTRAIL_INTERVAL,
		{
				ST_STARTRAIL_INTERVAL,				// KEY_NULL
				ST_STARTRAIL_INTERVAL,				// KEY_MINUS
				ST_STARTRAIL_INTERVAL,		// KEY_SELECT
				ST_STARTRAIL_INTERVAL,		// KEY_PREV
				ST_STARTRAIL_INTERVAL,				// KEY_PLUS
				ST_STARTRAIL_SHUTTER_SPEED				// KEY_DOWN
		}
	},
	{
			ST_STARTRAIL_START,
		{
				ST_STARTRAIL_START,				// KEY_NULL
				ST_STARTRAIL,				// KEY_MINUS
				ST_STARTRAIL_STOP,		// KEY_SELECT
				ST_STARTRAIL_START,		// KEY_PREV
				ST_STARTRAIL_START,				// KEY_PLUS
				ST_STARTRAIL_INTERVAL				// KEY_DOWN
		}
	},
	{
			ST_STARTRAIL_STOP,
		{
				ST_STARTRAIL_STOP,				// KEY_NULL
				ST_STARTRAIL_STOP,				// KEY_MINUS
				ST_STARTRAIL_START,		// KEY_SELECT
				ST_STARTRAIL_STOP,		// KEY_PREV
				ST_STARTRAIL_STOP,				// KEY_PLUS
				ST_STARTRAIL_STOP				// KEY_DOWN
		}
	},
	{
			ST_STARTRAIL_SHUTTER_SPEED,
		{
				ST_STARTRAIL_SHUTTER_SPEED,				// KEY_NULL
				ST_STARTRAIL_SHUTTER_SPEED,				// KEY_MINUS
				ST_STARTRAIL_SHUTTER_SPEED,		// KEY_SELECT
				ST_STARTRAIL_SHUTTER_SPEED,		// KEY_PREV
				ST_STARTRAIL_SHUTTER_SPEED,				// KEY_PLUS
				ST_STARTRAIL_SHUTTER_SPEED				// KEY_DOWN
		}
	},
	{
		ST_BULBRAMP_START_EXP,
		{
			ST_BULBRAMP_START_EXP,	// KEY_NULL
			ST_BULBRAMP_START_EXP,		// KEY_MINUS
			ST_BULBRAMP_START_EXP,	// KEY_SELECT
			ST_BULBRAMP_START,	// KEY_PREV
			ST_BULBRAMP_START_EXP,	// KEY_PLUS
			ST_BULBRAMP_END_EXP	// KEY_DOWN
		}
	},
	{
		ST_BULBRAMP_END_EXP,
		{
			ST_BULBRAMP_END_EXP,	// KEY_NULL
			ST_BULBRAMP_END_EXP,		// KEY_MINUS
			ST_BULBRAMP_END_EXP,	// KEY_SELECT
			ST_BULBRAMP_START_EXP,	// KEY_PREV
			ST_BULBRAMP_END_EXP,	// KEY_PLUS
			ST_BULBRAMP_DELAYSTART	// KEY_DOWN
		}
	},
	{
		ST_BULBRAMP_DELAYSTART,
		{
			ST_BULBRAMP_DELAYSTART,	// KEY_NULL
			ST_BULBRAMP_DELAYSTART,		// KEY_MINUS
			ST_BULBRAMP_DELAYSTART,	// KEY_SELECT
			ST_BULBRAMP_END_EXP,	// KEY_PREV
			ST_BULBRAMP_DELAYSTART,	// KEY_PLUS
			ST_BULBRAMP_COUNT	// KEY_DOWN
		}
	},
	{
		ST_BULBRAMP_DURATION,
		{
			ST_BULBRAMP_DURATION,	// KEY_NULL
			ST_BULBRAMP_DURATION,		// KEY_MINUS
			ST_BULBRAMP_DURATION,	// KEY_SELECT
			ST_BULBRAMP_DELAYSTART,	// KEY_PREV
			ST_BULBRAMP_DURATION,	// KEY_PLUS
			ST_BULBRAMP_DURATION	// KEY_DOWN
		}
	},
	{
		ST_HSF_TRIGGERON_SET,
		{
			ST_HSF_TRIGGERON_SET,				// KEY_NULL
			ST_HSF_TRIGGERON_SET,				// KEY_MINUS
			ST_HSF_TRIGGERON_SET,		// KEY_SELECT
			ST_HSF_TRIGGERON_SET,		// KEY_PREV
			ST_HSF_TRIGGERON_SET,				// KEY_PLUS
			ST_HSF_TRIGGERON_SET				// KEY_DOWN
		}
	},
	{
		ST_HSF_CLOSESHUTTER_SET,
		{
			ST_HSF_CLOSESHUTTER_SET,				// KEY_NULL
			ST_HSF_CLOSESHUTTER_SET,				// KEY_MINUS
			ST_HSF_CLOSESHUTTER_SET,		// KEY_SELECT
			ST_HSF_CLOSESHUTTER_SET,		// KEY_PREV
			ST_HSF_CLOSESHUTTER_SET,				// KEY_PLUS
			ST_HSF_CLOSESHUTTER_SET				// KEY_DOWN
		}
	},
	{
		ST_HSF_FLASH_DELAY_SET,
		{
			ST_HSF_FLASH_DELAY_SET,				// KEY_NULL
			ST_HSF_FLASH_DELAY_SET,				// KEY_MINUS
			ST_HSF_FLASH_DELAY_SET,		// KEY_SELECT
			ST_HSF_FLASH_DELAY_SET,		// KEY_PREV
			ST_HSF_FLASH_DELAY_SET,				// KEY_PLUS
			ST_HSF_FLASH_DELAY_SET				// KEY_DOWN
		}
	},
	{
		ST_HSF_RESETDELAY_SET,
		{
			ST_HSF_RESETDELAY_SET,				// KEY_NULL
			ST_HSF_RESETDELAY_SET,				// KEY_MINUS
			ST_HSF_RESETDELAY_SET,		// KEY_SELECT
			ST_HSF_RESETDELAY_SET,		// KEY_PREV
			ST_HSF_RESETDELAY_SET,				// KEY_PLUS
			ST_HSF_RESETDELAY_SET				// KEY_DOWN
		}
	},
	{
		ST_HSF_TIMESACTIVE_SET,
		{
			ST_HSF_TIMESACTIVE_SET,				// KEY_NULL
			ST_HSF_TIMESACTIVE_SET,				// KEY_MINUS
			ST_HSF_TIMESACTIVE_SET,		// KEY_SELECT
			ST_HSF_TIMESACTIVE_SET,		// KEY_PREV
			ST_HSF_TIMESACTIVE_SET,				// KEY_PLUS
			ST_HSF_TIMESACTIVE_SET				// KEY_DOWN
		}
	},
	{
		ST_HSF_START_TIME_SET,
		{
			ST_HSF_START_TIME_SET,				// KEY_NULL
			ST_HSF_START_TIME_SET,				// KEY_MINUS
			ST_HSF_START_TIME_SET,	// KEY_SELECT
			ST_HSF_START_TIME_SET,		// KEY_PREV
			ST_HSF_START_TIME_SET,				// KEY_PLUS
			ST_HSF_START_TIME_SET,				// KEY_DOWN
		}
	},
	{
		ST_HSF_END_TIME_SET,
		{
			ST_HSF_END_TIME_SET,				// KEY_NULL
			ST_HSF_END_TIME_SET,				// KEY_MINUS
			ST_HSF_END_TIME_SET,	// KEY_SELECT
			ST_HSF_END_TIME_SET,		// KEY_PREV
			ST_HSF_END_TIME_SET,				// KEY_PLUS
			ST_HSF_END_TIME_SET,				// KEY_DOWN
		}
	},
	
	{
		ST_LEHDR_START,
		{
			ST_LEHDR_START,			// KEY_NULL
			ST_LEHDR,			// KEY_MINUS
			ST_LEHDR_PROGBAR,		// KEY_SELECT
			ST_LEHDR_START,		// KEY_PREV
			ST_LEHDR_START,			// KEY_PLUS
			ST_LEHDR_MIDEXP_SET		// KEY_DOWN
		}
	},
	
	{
		ST_LEHDR_STOP,
		{
			ST_LEHDR_STOP,			// KEY_NULL
			ST_LEHDR_STOP,			// KEY_MINUS
			ST_LEHDR_START,		// KEY_SELECT
			ST_LEHDR_STOP,		// KEY_PREV
			ST_LEHDR_STOP,			// KEY_PLUS
			ST_LEHDR_STOP		// KEY_DOWN
		}
	},

	{
		
		ST_A_SENSOR_START,
		{
			ST_A_SENSOR_START,				// KEY_NULL
			ST_ADVANCESENS,				// KEY_MINUS
			ST_ADVSENSOR_CONFIG_PROGESS,		// KEY_SELECT
			ST_A_SENSOR_START,				// KEY_PREV
			ST_A_SENSOR_START,				// KEY_PLUS
			ST_A_SENSOR_CH1A_D		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_STOP,
		{
			ST_A_SENSOR_STOP,				// KEY_NULL
			ST_A_SENSOR_STOP,				// KEY_MINUS
			ST_A_SENSOR_START,				// KEY_SELECT
			ST_A_SENSOR_STOP,				// KEY_PREV
			ST_A_SENSOR_STOP,				// KEY_PLUS
			ST_A_SENSOR_STOP		// KEY_DOWN
		}
	},

	{
		ST_A_SENSOR_CH1A_D,
		{
			ST_A_SENSOR_CH1A_D,				// KEY_NULL
			ST_A_SENSOR_CH1A_D,				// KEY_MINUS
			ST_A_SENSOR_CH1A_D,				// KEY_SELECT
			ST_A_SENSOR_START,				// KEY_PREV
			ST_A_SENSOR_CH1A_D,				// KEY_PLUS
			ST_A_SENSOR_CH1A_P		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH1A_P,
		{
			ST_A_SENSOR_CH1A_P,				// KEY_NULL
			ST_A_SENSOR_CH1A_P,				// KEY_MINUS
			ST_A_SENSOR_CH1A_P,				// KEY_SELECT
			ST_A_SENSOR_CH1A_D,				// KEY_PREV
			ST_A_SENSOR_CH1A_P,				// KEY_PLUS
			ST_A_SENSOR_CH1B_D		// KEY_DOWN
		}
	},

	{
		ST_A_SENSOR_CH1B_D,
		{
			ST_A_SENSOR_CH1B_D,				// KEY_NULL
			ST_A_SENSOR_CH1B_D,				// KEY_MINUS
			ST_A_SENSOR_CH1B_D,				// KEY_SELECT
			ST_A_SENSOR_CH1A_P,				// KEY_PREV
			ST_A_SENSOR_CH1B_D,				// KEY_PLUS
			ST_A_SENSOR_CH1B_P		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH1B_P,
		{
			ST_A_SENSOR_CH1B_P,				// KEY_NULL
			ST_A_SENSOR_CH1B_P,				// KEY_MINUS
			ST_A_SENSOR_CH1B_P,				// KEY_SELECT
			ST_A_SENSOR_CH1B_D,				// KEY_PREV
			ST_A_SENSOR_CH1B_P,				// KEY_PLUS
			ST_A_SENSOR_CH2A_D		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH2A_D,
		{
			ST_A_SENSOR_CH2A_D,				// KEY_NULL
			ST_A_SENSOR_CH2A_D,				// KEY_MINUS
			ST_A_SENSOR_CH2A_D,				// KEY_SELECT
			ST_A_SENSOR_CH1B_P,				// KEY_PREV
			ST_A_SENSOR_CH2A_D,				// KEY_PLUS
			ST_A_SENSOR_CH2A_P		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH2A_P,
		{
			ST_A_SENSOR_CH2A_P,				// KEY_NULL
			ST_A_SENSOR_CH2A_P,				// KEY_MINUS
			ST_A_SENSOR_CH2A_P,				// KEY_SELECT
			ST_A_SENSOR_CH2A_D,				// KEY_PREV
			ST_A_SENSOR_CH2A_P,				// KEY_PLUS
			ST_A_SENSOR_CH2B_D		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH2B_D,
		{
			ST_A_SENSOR_CH2B_D,				// KEY_NULL
			ST_A_SENSOR_CH2B_D,				// KEY_MINUS
			ST_A_SENSOR_CH2B_D,				// KEY_SELECT
			ST_A_SENSOR_CH2A_P,				// KEY_PREV
			ST_A_SENSOR_CH2B_D,				// KEY_PLUS
			ST_A_SENSOR_CH2B_P		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH2B_P,
		{
			ST_A_SENSOR_CH2B_P,				// KEY_NULL
			ST_A_SENSOR_CH2B_P,				// KEY_MINUS
			ST_A_SENSOR_CH2B_P,				// KEY_SELECT
			ST_A_SENSOR_CH2B_D,				// KEY_PREV
			ST_A_SENSOR_CH2B_P,				// KEY_PLUS
			ST_A_SENSOR_CH3A_D		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH3A_D,
		{
			ST_A_SENSOR_CH3A_D,				// KEY_NULL
			ST_A_SENSOR_CH3A_D,				// KEY_MINUS
			ST_A_SENSOR_CH3A_D,				// KEY_SELECT
			ST_A_SENSOR_CH2B_P,				// KEY_PREV
			ST_A_SENSOR_CH3A_D,				// KEY_PLUS
			ST_A_SENSOR_CH3A_P		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH3A_P,
		{
			ST_A_SENSOR_CH3A_P,				// KEY_NULL
			ST_A_SENSOR_CH3A_P,				// KEY_MINUS
			ST_A_SENSOR_CH3A_P,				// KEY_SELECT
			ST_A_SENSOR_CH3A_D,				// KEY_PREV
			ST_A_SENSOR_CH3A_P,				// KEY_PLUS
			ST_A_SENSOR_CH3B_D		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH3B_D,
		{
			ST_A_SENSOR_CH3B_D,				// KEY_NULL
			ST_A_SENSOR_CH3B_D,				// KEY_MINUS
			ST_A_SENSOR_CH3B_D,				// KEY_SELECT
			ST_A_SENSOR_CH3A_P,				// KEY_PREV
			ST_A_SENSOR_CH3B_D,				// KEY_PLUS
			ST_A_SENSOR_CH3B_P		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_CH3B_P,
		{
			ST_A_SENSOR_CH3B_P,				// KEY_NULL
			ST_A_SENSOR_CH3B_P,				// KEY_MINUS
			ST_A_SENSOR_CH3B_P,				// KEY_SELECT
			ST_A_SENSOR_CH3B_P,				// KEY_PREV
			ST_A_SENSOR_CH3B_P,				// KEY_PLUS
			ST_A_SENSOR_CH3B_P		// KEY_DOWN
		}
	},

	{
		ST_A_SENSOR_CH3B_P,
		{
			ST_A_SENSOR_CH3B_P,				// KEY_NULL
			ST_A_SENSOR_CH3B_P,				// KEY_MINUS
			ST_A_SENSOR_CH3B_P,				// KEY_SELECT
			ST_A_SENSOR_CH3B_P,				// KEY_PREV
			ST_A_SENSOR_CH3B_P,				// KEY_PLUS
			ST_A_SENSOR_TRIGGER_MOBILE		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_TRIGGER_MOBILE,
		{
			ST_A_SENSOR_TRIGGER_MOBILE,				// KEY_NULL
			ST_A_SENSOR_TRIGGER_MOBILE,				// KEY_MINUS
			ST_A_SENSOR_TRIGGER_MOBILE,				// KEY_SELECT
			ST_A_SENSOR_CH3B_P,				// KEY_PREV
			ST_A_SENSOR_TRIGGER_MOBILE,				// KEY_PLUS
			ST_A_SENSOR_RESET_DELAY		// KEY_DOWN
		}
	},

	{
		ST_A_SENSOR_RESET_DELAY,
		{
			ST_A_SENSOR_RESET_DELAY,				// KEY_NULL
			ST_A_SENSOR_RESET_DELAY,				// KEY_MINUS
			ST_A_SENSOR_RESET_DELAY,				// KEY_SELECT
			ST_A_SENSOR_TRIGGER_MOBILE,				// KEY_PREV
			ST_A_SENSOR_RESET_DELAY,				// KEY_PLUS
			ST_A_SENSOR_TRIGGER_ON		// KEY_DOWN
		}
	},
	{
		ST_A_SENSOR_TRIGGER_ON,
		{
			ST_A_SENSOR_TRIGGER_ON,				// KEY_NULL
			ST_A_SENSOR_TRIGGER_ON,				// KEY_MINUS
			ST_A_SENSOR_TRIGGER_ON,				// KEY_SELECT
			ST_A_SENSOR_RESET_DELAY,				// KEY_PREV
			ST_A_SENSOR_TRIGGER_ON,				// KEY_PLUS
			ST_A_SENSOR_TRIGGER_ON		// KEY_DOWN
		}
	},
	
#ifdef INCLUDE_NEWMODE
	{
		ST_NEWMODE,
		{
			ST_NEWMODE,							// KEY_NULL
			ST_NEWMODE,							// KEY_MINUS
			ST_NEWMODE_START,					// KEY_SELECT
			ST_LEHDR,							// KEY_PREV
			ST_NEWMODE,							// KEY_PLUS
			ST_SETTINGS							// KEY_DOWN
		}
	},
	
	{
		ST_NEWMODE_START,
		{
			ST_NEWMODE_START,					// KEY_NULL
			ST_NEWMODE,							// KEY_MINUS
			ST_NEWMODE_SETTLING,				// KEY_SELECT
			ST_NEWMODE_START,					// KEY_PREV
			ST_NEWMODE_START,					// KEY_PLUS
			ST_NEWMODE_TRIGGERON				// KEY_DOWN
		}
	},
	
	{
		ST_NEWMODE_RUNNING,
		{
			ST_NEWMODE_RUNNING,					// KEY_NULL
			ST_NEWMODE_START,					// KEY_MINUS
			ST_NEWMODE_RUNNING,					// KEY_SELECT
			ST_NEWMODE_RUNNING,					// KEY_PREV
			ST_NEWMODE_RUNNING,					// KEY_PLUS
			ST_NEWMODE_RUNNING					// KEY_DOWN
		}
	},
#endif	
	
	{
		0,
		{
			0,				// KEY_NULL
			0,				// KEY_MINUS
			0,				// KEY_SELECT
			0,				// KEY_PREV	
			0,				// KEY_PLUS
			0				// KEY_DOWN
		}
	}
};
		
MENU_STATE menu_state[] = 
{
    {ST_TMLPSE,                         GUIMENU_TIMELAPSE_TITLE_PAGE,                   NULL},
	{ST_TIMEWARP,            			GUIMENU_TIMEWARP_TITLE_PAGE,					NULL},
	{ST_BULBRAMP,            			GUIMENU_BULBRAMPING_TITLE_PAGE,					NULL},
	{ST_STARTRAIL,						GUIMENU_STARTRAIL_TITLE_PAGE,					NULL},
	{ST_HSF,							GUIMENU_HISPEEDFLASH_TITLE_PAGE,				NULL},
	{ST_SEN,							GUIMENU_SENSOR_TITLE_PAGE,						NULL},
	{ST_SEN_TL,							GUIMENU_SENSORTLAPSE_TITLE_PAGE,				NULL},
	{ST_SENSVIDEO,						GUIMENU_SENSORTVIDEO_TITLE_PAGE,				NULL},	
	{ST_ADVANCESENS,					GUIMENU_ADVSENSOR_TITLE_PAGE,					NULL},
	{ST_LEHDR,							GUIMENU_LEHDR_TITLE_PAGE,						NULL},
#ifdef INCLUDE_NEWMODE
	{ST_NEWMODE,						GUIMENU_NEWMODE_TITLE_PAGE,						NULL},
#endif
	{ST_SETTINGS,						GUIMENU_SETTINGS_TITLE_PAGE,					NULL},
	
	{ST_TMLPSE_START,					GUIMENU_TIMELAPSE_START_PAGE,					NULL},
	{ST_OFF,							GUIMENU_POWEROFF_TITLE_PAGE,					NULL},
	
	
	{ST_TMLPSE_COUNT,					GUIMENU_TIMELAPSE_COUNT_PAGE,					TimelapseCountSet},
	{ST_TMLPSE_INTERVAL,				GUIMENU_TIMELAPSE_INTERVAL_PAGE,				TimelapseIntervalSet},
	{ST_TMLPSE_START_DELAY,				GUIMENU_TIMELAPSE_START_DELAY_PAGE,				TimelapseStartDelay},
	{ST_TMLPSE_ACTIVE,					GUIMENU_TIMELAPSE_TIMESACTIVE_PAGE,				TimelapseTimeActive},
	{ST_TMLPSE_START_TIME,				GUIMENU_TIMELAPSE_STARTTIME_PAGE,				TimelapseStartTime},
	{ST_TMLPSE_END_TIME,				GUIMENU_TIMELAPSE_ENDTIME_PAGE,					TimelapseEndTime},
	{ST_TMLPSE_PROGBAR,					GUIMENU_TIMELAPSE_PROG_PAGE,					Timelapse_new},
		
		
	{ST_BULBRAMP_START,					GUIMENU_BULBRAMP_START_PAGE,					NULL},
	{ST_BULBRAMP_COUNT,					GUIMENU_BULBRAMP_COUNT_PAGE,					BulbRampCountSet},
	{ST_BULBRAMP_PROGBAR,				GUIMENU_BRAMP_PROG_PAGE,						BulbRamp},
	{ST_BULBRAMP_START_EXP,				GUIMENU_BULBRAMP_START_EXPOSURE_PAGE,			BulbRampStartExpSet},
	{ST_BULBRAMP_END_EXP,				GUIMENU_BULBRAMP_END_EXPOSURE_PAGE,				BulbRampEndExpSet},
	{ST_BULBRAMP_DELAYSTART,			GUIMENU_BULBRAMP_STARTDELAY_PAGE,				BulbRampDelaySet},		
	{ST_BULBRAMP_DURATION,				GUIMENU_BULBRAMP_DURATION_PAGE,					BulbRampDurationSet},		
				
	{ST_TIMEWARP_START,					GUIMENU_TIMEWARP_START_PAGE,					NULL},
	{ST_TIMEWARP_FUNCTION,				GUIMENU_TIMEWARP_FUNCTION_PAGE,					TimeWarpFunctionSet},
	{ST_TIMEWARP_RUN,					GUIMENU_NO_PAGE,								TimeWarp},
	{ST_TIMEWARP_COUNT_SET,				GUIMENU_TIMEWARP_COUNT_PAGE,					TimeWarpCountSet},
	{ST_TIMEWARP_DIRECTION_SET,			GUIMENU_TIMEWARP_DIRECTION_PAGE,				TimeWarpDirectionSet},	
	{ST_TIMEWARP_WAIT_SET,				GUIMENU_TIMEWARP_WAIT_PAGE,						TimeWarpWaitSet},
	{ST_TIMEWARP_DURATION_SET,			GUIMENU_TIMEWARP_DURATION_PAGE,					TimeWarpDurationSet},		
	
	{ST_SENSORVIDEO_START,				GUIMENU_SENSORVIDEO_START_PAGE,					NULL},
	{ST_SENSORVIDEO_DELAY,				GUIMENU_SENSORVIDEO_DELAY_PAGE,					SensorVideoDelaySet},
	{ST_OFF_FUNC,						GUIMENU_NO_PAGE,								PowerDownFunc},
	{ST_SETTINGS_OP_PREFOCUS,			GUIMENU_CAMERA_PREFOCUS_PAGE,					CameraPrefocusSet},
	{ST_SETTINGS_OP_SHTPLSE,			GUIMENU_SHUTTER_PULSE_PAGE,						ShutterPulseSet},
	{ST_SETTINGS_OP_FLSHPLSE,			GUIMENU_FLASH_PULSE_PAGE,						FlashPulseSet},
	{ST_SETTINGS_SETSYSTEM_TIME,		GUIMENU_SETTINGS_SETSYSTEM_TIME_PAGE,			Timeset},

	{ST_STARTRAIL_START,				GUIMENU_STARTRAIL_START_PAGE,					NULL},
	{ST_STARTRAIL_INTERVAL,				GUIMENU_STARTRAIL_INTERVAL_PAGE,				StarTrailInterval},
	{ST_STARTRAIL_SHUTTER_SPEED,		GUIMENU_STARTRAIL_SHUTTER_SPEED_PAGE,			StarTrailShutterSpeed},
	{ST_STARTRAIL_COUNT,				GUIMENU_STARTRAIL_COUNT_PAGE,					StarTrailCount},
	{ST_STARTRAIL_DELAY,				GUIMENU_STARTRAIL_DELAY_PAGE,					StarTrailDelay},
	{ST_STARTRAIL_STOP,					GUIMENU_NO_PAGE,								StarTrail},					
		
	{ST_HSF_START,						GUIMENU_HSF_START_PAGE,							NULL},
	{ST_HSF_STOP,						GUIMENU_HSF_STOP_PAGE,							HighSpeedFlash},
	{ST_HSF_TRIGGERON_SET,				GUIMENU_HSF_TRIGGERON_PAGE,						HSFTriggerOnSet},
	{ST_HSF_CLOSESHUTTER_SET,			GUIMENU_HSF_CLOSE_SHUTTER_PAGE,					HSFCloseShutterSet},
	{ST_HSF_SHUTTERCYCLE_SET,			GUIMENU_HSF_SHUTTER_CYCLING_PAGE,				HSFShutterCycleSet},
	{ST_HSF_FLASH_DELAY_SET,			GUIMENU_HSF_FLASH_DELAY_PAGE,					HSFFlashDelaySet},
	{ST_HSF_RESETDELAY_SET,				GUIMENU_HSF_RESET_DELAY_PAGE,					HSFResetDelaySet},
	{ST_HSF_TIMESACTIVE_SET,			GUIMENU_HSF_TIMESACTIVE_PAGE,					HSFTimesActiveSet},
	{ST_HSF_START_TIME_SET,				GUIMENU_HSF_STARTTIME_PAGE,						HSFStartTimeSet},
	{ST_HSF_END_TIME_SET,				GUIMENU_HSF_ENDTIME_PAGE,						HSFEndTimeSet},
		
	{ST_SENSORVIDEO_STOP_AFTER_SET,		GUIMENU_SENSORVIDEO_STOP_ACT_PAGE,				SensorVideoStopAfterActSet},
	{ST_SENSORVIDEO_TRIGGER_SET,		GUIMENU_SENSORVIDEO_TRIGGER_PAGE,				SensorVideoTriggerSet},
	{ST_SENSORVIDEO_TIMESACTIVE_SET,	GUIMENU_SENSORVIDEO_TIMESACTIVE_PAGE,			SensorVideoTimesActiveSet},
	{ST_SENSORVIDEO_STARTTIME_SET,		GUIMENU_SENSORVIDEO_STARTTIME_PAGE,				SensorVideoStartTimeSet},
	{ST_SENSORVIDEO_ENDTIME_SET,		GUIMENU_SENSORVIDEO_ENDTIME_PAGE,				SensorVideoEndTimeSet},
	{ST_SENSORVIDEO_TRIGGERON_SET,		GUIMENU_SENSORVIDEO_TRIGGERON_PAGE,				SensorVideoTriggerOnSet},
	{ST_SENSORVIDEO_STOP,				GUIMENU_SENSOR_VIDEO_STOP_PAGE,					SensorVideo},

	{ST_LEHDR_START,					GUIMENU_LEHDR_START_PAGE,						NULL},
	{ST_LEHDR_PROGBAR,					GUIMENU_LEHDR_PROG_PAGE,						LongExposure_HDR},
	{ST_LEHDR_MIDEXP_SET,				GUIMENU_LEHDR_MID_EXP_PAGE,						LEHDRMidExpSet},
	{ST_LEHDR_SHOTS_SET,				GUIMENU_LEHDR_SHOTS_PAGE,						LEHDRShotsSet},
	{ST_LEHDR_EVPERSTEP_SET,			GUIMENU_LEHDR_EV_PER_STEP_PAGE,					LEHDREVPerStepSet},
	{ST_LEHDR_TIMLAPSE_SET,				GUIMENU_LEHDR_TIMELAPSE_PAGE,					LEHDRTimelapseSet},
		
	{ST_SENSOR_START,						GUIMENU_SENSOR_START_PAGE,					NULL},
	{ST_SENSOR_STOP,						GUIMENU_SENSOR_STOP_PAGE,					SensorTrigger},
	{ST_SENSOR_TRIGGER_DELAY,				GUIMENU_SENSOR_TRIGGER_DELAY_PAGE,		SensorTriggerDelay},
	{ST_SENSOR_RESET_DELAY,					GUIMENU_SENSOR_RESET_DELAY_PAGE,		SensorResetDelay},
	{ST_SENSOR_TRIGGER_ON,					GUIMENU_SENSOR_TIRGGER_ON_PAGE,			SensorTriggerOn},
	{ST_SENSOR_MOBILE_INPUT,				GUIMENU_SENSOR_MOBILE_INPUT_PAGE,		SensorMobileInput},
	{ST_SENSOR_MOBILE_OUTPUT,				GUIMENU_SENSOR_MOBILE_OUTPUT_PAGE,		SensorMobileOutput},
	{ST_SENSOR_TIME_ACTIVE,					GUIMENU_SENSOR_TIME_ACTIVE_PAGE,		SensorTimeActive},
	{ST_SENSOR_START_TIME,					GUIMENU_SENSOR_START_TIME_PAGE,			SensorStartTime},
	{ST_SENSOR_STOP_TIME,					GUIMENU_SENSOR_STOP_TIME_PAGE,			SensorStopTime},

	{ST_SEN_TL_START,						GUIMENU_SENSOR_TL_START_PAGE,			NULL},
	{ST_SEN_TL_STOP,						GUIMENU_SENSOR_TL_STOP_PAGE,			SensorTimeLapse},
	{ST_SEN_TL_PROGBAR,						GUIMENU_SENTLAPSE_PROG_PAGE,			SensorTimeLapse},
	{ST_SEN_TL_DELAY,						GUIMENU_SENSOR_TL_DELAY_PAGE,			Sensor_TL_Delay},
	{ST_SEN_TL_INTERVAL,					GUIMENU_SENSOR_TL_INTERVAL_PAGE,		Sensor_TL_Interval},
	{ST_SEN_TL_CONTINUE,					GUIMENU_SENSOR_TL_CONTINUE_PAGE,		Sensor_TL_Continue},
	{ST_SEN_TL_TRIGGER,						GUIMENU_SENSOR_TL_TRIGGER_ON_PAGE,		Sensor_TL_Trigger},
	{ST_SEN_TL_MOBILE_INPUT,				GUIMENU_SENSOR_TL_MOBILE_INPUT_PAGE,	Sensor_TL_MobileInput},
	{ST_SEN_TL_MOBILE_OUTPUT,				GUIMENU_SENSOR_TL_MOBILE_OUTPUT_PAGE,	Sensor_TL_MobileOutput},
	{ST_SEN_TL_TIME_ACTIVE,					GUIMENU_SENSOR_TL_TIME_ACTIVE_PAGE,		Sensor_TL_TimeActive},
	{ST_SEN_TL_START_TIME,					GUIMENU_SENSOR_TL_START_TIME_PAGE,		Sensor_TL_StartTime},
	{ST_SEN_TL_STOP_TIME,					GUIMENU_SENSOR_TL_STOP_TIME_PAGE,		Sensor_TL_StopTime},
	{ST_SEN_TL_CONTINUE_SET,				GUIMENU_SENSOR_TL_CONTINUE_SET_PAGE,	Sensor_TL_Continue_Set},
		
	{ST_A_SENSOR_START,						GUIMENU_A_SENSOR_START_PAGE,			NULL},
	{ST_A_SENSOR_STOP,						GUIMENU_A_SENSOR_STOP_PAGE,				AdvancedSensor},
	{ST_A_SENSOR_CH1A_D,					GUIMENU_A_SENSOR_CH1A_DELAY_PAGE,		A_Sensor_CH1A_D},
	{ST_A_SENSOR_CH1A_P,					GUIMENU_A_SENSOR_CH1A_PULSE_PAGE,		A_Sensor_CH1A_P},
	{ST_A_SENSOR_CH1B_D,					GUIMENU_A_SENSOR_CH1B_DELAY_PAGE,		A_Sensor_CH1B_D},
	{ST_A_SENSOR_CH1B_P,					GUIMENU_A_SENSOR_CH1B_PULSE_PAGE,		A_Sensor_CH1B_P},
	
	{ST_A_SENSOR_CH2A_D,					GUIMENU_A_SENSOR_CH2A_DELAY_PAGE,		A_Sensor_CH2A_D},
	{ST_A_SENSOR_CH2A_P,					GUIMENU_A_SENSOR_CH2A_PULSE_PAGE,		A_Sensor_CH2A_P},
	{ST_A_SENSOR_CH2B_D,					GUIMENU_A_SENSOR_CH2B_DELAY_PAGE,		A_Sensor_CH2B_D},
	{ST_A_SENSOR_CH2B_P,					GUIMENU_A_SENSOR_CH2B_PULSE_PAGE,		A_Sensor_CH2B_P},
	
	{ST_A_SENSOR_CH3A_D,					GUIMENU_A_SENSOR_CH3A_DELAY_PAGE,		A_Sensor_CH3A_D},
	{ST_A_SENSOR_CH3A_P,					GUIMENU_A_SENSOR_CH3A_PULSE_PAGE,		A_Sensor_CH3A_P},
	{ST_A_SENSOR_CH3B_D,					GUIMENU_A_SENSOR_CH3B_DELAY_PAGE,		A_Sensor_CH3B_D},
	{ST_A_SENSOR_CH3B_P,					GUIMENU_A_SENSOR_CH3B_PULSE_PAGE,		A_Sensor_CH3B_P},
	
	{ST_A_SENSOR_TRIGGER_MOBILE,			GUIMENU_A_SENSOR_TRIGGER_MOBILE_PAGE,	A_Sensor_Trigger_Mobile},
	{ST_A_SENSOR_RESET_DELAY,				GUIMENU_A_SENSOR_RESET_DELAY_PAGE,		A_Sensor_Reset_Delay},
	{ST_A_SENSOR_TRIGGER_ON,				GUIMENU_A_SENSOR_TRIGGER_ON_PAGE,		A_Sensor_Trigger_On},
	{ST_SETTINGS_ABOUT,						GUIMENU_SETTINGS_ABOUT_PAGE,			About},
	{ST_HSF_CONFIG_PROGRESS,				GUIMENU_HSF_CONFIG_PAGE,				HSFConfigure},
	{ST_SENSOR_CONFIG_PROGESS,				GUIMENU_SENSOR_CONFIG_PAGE,				SensorConfigure},
	{ST_SEN_TL_CONFIG_PROGESS,				GUIMENU_SENSORTLAPSE_CONFIG_PAGE,		SensorTLConfigure},
	{ST_SENSORVIDEO_CONFIG_PROGESS,			GUIMENU_SENSORVIDEO_CONFIG_PAGE,		SensorVideoConfigure},
	{ST_ADVSENSOR_CONFIG_PROGESS,			GUIMENU_ADVSENSOR_CONFIG_PAGE,			AdvancedSensorConfigure},
		
#ifdef INCLUDE_NEWMODE
	{ST_NEWMODE_START,						GUIMENU_NEWMODE_START_PAGE,				NULL},
	{ST_NEWMODE_SETTLING,					GUIMENU_NEWMODE_SETTLING_PAGE,			NewModeSettling},
	{ST_NEWMODE_RUNNING,					GUIMENU_NEWMODE_RUNNING_PAGE,			NewModeRun},
	{ST_NEWMODE_TRIGGERON,					GUIMENU_NEWMODE_TRIGGERON_PAGE,			NewModeTriggerOn},
	{ST_NEWMODE_DELAY,						GUIMENU_NEWMODE_DELAY_PAGE,				NewModeDelay},
#endif
	
    {0,                                 0,                        0}
    
};


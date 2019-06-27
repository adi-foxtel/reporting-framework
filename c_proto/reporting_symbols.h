/*
#  Developed by Alan Hurdle on 24/6/19, 12:05 pm.
#  Last modified 27/6/19, 9:07 pm
#  Copyright (c) 2019 Foxtel Management Pty Limited. All rights reserved
*/
#ifndef REPORTING_SYMBOLS_H
#define REPORTING_SYMBOLS_H

#define REPORTING_SYMBOLS_VERSION 1
#define REPORTING_SYMBOLS_SCHEMA "foxtel.engagement.format"

enum FieldSymbols {
	SYSTEM_ION = 1,
	SYSTEM_ION_1_0,
	SYSTEM_ION_SYMBOL_TABLE,
	SYSTEM_ION_NAME,
	SYSTEM_ION_VERSION,
	SYSTEM_ION_IMPORTS,
	SYSTEM_ION_SYMBOLS,
	SYSTEM_ION_MAX_ID,
	SYSTEM_ION_SHARED_SYMBOL_TABLE,
	DOC_VERSION,
	TIMESTAMP,
	SEQUENCE_ID,
	LIBRARY_NAME,
	LIBRARY_VERSION,
	DEVICE_TYPE,
	DEVICE_NAME,
	DEVICE_VARIANT,
	DEVICE_HW_ID,
	DEVICE_CDSN,
	DEVICE_CA_CARD,
	CUSTOMER_AMS_ID,
	CUSTOMER_AMS_PANEL,
	SOFTWARE_VERSION,
	EVENT_LIST,
	HARDWARE_VERSION,
	OS_VERSION,
	DEVICE_MODEL_ID,
	DEVICE_RESETS,
	DEVICE_UPTIME,
	PVR_HDD_SIZE,
	PVR_CUST_FREE_PERC,
	PVR_PVOD_FREE_PERC,
	PVR_NUM_RECORDINGS,
	DISPLAY_CONNECTION,
	DISPLAY_NAME,
	DISPLAY_MANUFACTURER,
	DISPLAY_BUILD_DATE,
	DISPLAY_OPTIMAL_RES,
	DISPLAY_HDR_SUPPORT,
	APP_POSTCODE,
	APP_DTT_REGION,
	APP_REGION_ID,
	NETWORK_TYPE,
	RCU_VERSION,
	RCU_KEYS_PRESSED,
	RCU_TYPE,
	UI_VERSION,
	EPG_VERSION,
	EPG_VERSION_INSTALL_DATE,
	EVENT_ID,
	APP_SESSION_ID,
	USAGE_SESSION_ID,
	PAGE_SESSION_ID,
	CONTEXT_EVENT_ID,
	EVENT_PROPERTY_STRUCT,
	EVENT_USER_INITIATED,
	PAGE_NAME,
	PREVIOUS_PAGE,
	PAGE_FILTER,
	PAGE_SORT,
	CONTENT_PROVIDER,
	CONTENT_PROMO_CHANNEL,
	CONTENT_PROGRAM_ID,
	CONTENT_SCHEDULE_ID,
	CONTENT_START_TIMESTAMP,
	CONTENT_DURATION,
	CONTENT_PROGRAM_TITLE,
	CONTENT_EPISODE_TITLE,
	CONTENT_CLASSIFICATION,
	CONTENT_RESOLUTION,
	CONTENT_PRICE,
	CONTENT_TYPE,
	PLAYER_VIEW_STATUS,
	MEDIA_EVENT_SOURCE,
	MEDIA_BOOKING_SOURCE,
	MEDIA_REC_START_TIMESTAMP,
	MEDIA_DURATION,
	MEDIA_REC_STATUS,
	MEDIA_EXPIRY_TIMESTAMP,
	MEDIA_EXTEND_REC_DURATION,
	MEDIA_DOWNLOAD_STATE,
	MEDIA_MAX_VIEWED_OFFSET,
	PLAYER_VIEWING_START_TIMESTAMP,
	PLAYER_TRICKMODE_SPEED,
	PLAYER_MEDIA_OFFSET,
	PLAYER_VIEWED_DURATION,
	PLAYER_QOS_AVG_BITRATE_KBPS,
	PLAYER_QOS_STARTUP_MS,
	PLAYER_QOS_BUFFERING_MS,
	PLAYER_QOS_BUFFERING_COUNT,
	PLAYER_QOS_ABR_SHIFTS,
	PLAYER_JUMP_TO,
	ERROR_FNUM_MESSAGE,
	ERROR_TECHNICAL_MESSAGE,
	DEVICE_POWER_STATUS,
	DISPLAY_ON,
	DISPLAY_DETECTED_HDR,
	DISPLAY_NEG_HDMI,
	DISPLAY_NEG_HDCP,
	DISPLAY_NEG_RESOLUTION,
	DISPLAY_NEG_FRAMERATE,
	DISPLAY_EDID_SIG,
	DISPLAY_EDID_BLOCK,
	SELECTOR_TRACK_ID,
	SELECTOR_TYPE,
	SELECTOR_TITLE,
	SELECTOR_ROW,
	SELECTOR_COLUMN,
	CONTENT_BRAND,
	TILE_LOCKED,
	COLLECTION_TITLE,
	COLLECTION_SOURCE,
	SEARCH_INITIATOR_SOURCE,
	SEARCH_TERM,
	SEARCH_SCORE,
	CONF_PIN_CLASSIFICATION,
	CONF_PIN_INFO,
	CONF_PIN_NC,
	CONF_CHANNEL_BLOCKING_ON,
	CONF_PIN_ON_PURCHASE,
	CONF_PIN_PROTECT_KEEP,
	CONF_PIN_IP_VIDEO,
	CONF_PIN_APP_LAUNCH,
	CONF_NUM_SCHED_REMINDERS,
	CONF_NUM_SCHED_RECORDINGS,
	CONF_NUM_TEAM_LINKS,
	CONF_FAVOURITES_SETUP,
	CONF_DTT_SETUP,
	CONF_ENERGY_SAVING_ON,
	CONF_SPDIF_AUDIO_MODE,
	CONF_HDMI_AUDIO_MODE,
	CONF_DOWNLOAD_HD,
	CONF_STREAM_FROM_STORE,
	CONF_CEC_POWER,
	CONF_CEC_VOLUME,
	APP_NAME,
	APP_PROVIDER,
	APP_STATE,
	REBOOT_TYPE
};

#define MAX_IMPORT_SYMBOLS (REBOOT_TYPE - DOC_VERSION)
#endif
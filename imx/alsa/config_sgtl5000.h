/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright (C) 2012 Freescale Semiconductor, Inc. */

#ifndef ANDROID_INCLUDE_IMX_CONFIG_SGTL5000_H
#define ANDROID_INCLUDE_IMX_CONFIG_SGTL5000_H

#include "audio_hardware.h"


#define MIXER_SGTL5000_SPEAKER_VOLUME                 "Speaker Volume"
#define MIXER_SGTL5000_SPEAKER_SWITCH                 "Speaker Switch"
#define MIXER_SGTL5000_HEADPHONE_VOLUME               "Headphone Volume"
#define MIXER_SGTL5000_HEADPHONE_SWITCH               "Headphone Switch"

#define MIXER_SGTL5000_CAPTURE_SWITCH                 "Capture Switch"
#define MIXER_SGTL5000_CAPTURE_VOLUME                 "Capture Volume"

#define MIXER_SGTL5000_INPGAR_IN3R_SWITCH             "INPGAR IN3R Switch"
#define MIXER_SGTL5000_MIXINR_IN3R_SWITCH             "MIXINR IN3R Switch"
#define MIXER_SGTL5000_MIXINR_IN3R_VOLUME             "MIXINR IN3R Volume"

#define MIXER_SGTL5000_MIXINR_PGA_SWITCH              "MIXINR PGA Switch"
#define MIXER_SGTL5000_MIXINR_PGA_VOLUME              "MIXINR PGA Volume"

#define MIXER_SGTL5000_DIGITAL_CAPTURE_VOLUME         "Digital Capture Volume"

#define MIXER_SGTL5000_DIGITAL_PLAYBACK_VOLUME        "Digital Playback Volume"


/* These are values that never change */
static struct route_setting defaults_sgtl5000[] = {
    /* general */
    {
        .ctl_name = MIXER_SGTL5000_DIGITAL_PLAYBACK_VOLUME,
  //      .intval = 96,
	.intval = 100,
    },
    {
        .ctl_name = NULL,
    },
};

static struct route_setting bt_output_sgtl5000[] = {
    {
        .ctl_name = NULL,
    },
};

static struct route_setting speaker_output_sgtl5000[] = {
    {
        .ctl_name = MIXER_SGTL5000_SPEAKER_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_SPEAKER_VOLUME,
//        .intval = 121,   // liuy
	.intval = 200,  
    },
    {
        .ctl_name = NULL,
    },
};

static struct route_setting hs_output_sgtl5000[] = {
    {
        .ctl_name = MIXER_SGTL5000_HEADPHONE_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_HEADPHONE_VOLUME,
//        .intval = 121,   // liuy
	.intval = 200,  
    },
    {
        .ctl_name = NULL,
    },
};

static struct route_setting earpiece_output_sgtl5000[] = {
    {
        .ctl_name = NULL,
    },
};

static struct route_setting vx_hs_mic_input_sgtl5000[] = {
    {
        .ctl_name = NULL,
    },
};


static struct route_setting mm_main_mic_input_sgtl5000[] = {
    {
        .ctl_name = MIXER_SGTL5000_CAPTURE_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_CAPTURE_VOLUME,
        .intval = 63,
    },
    {
        .ctl_name = MIXER_SGTL5000_DIGITAL_CAPTURE_VOLUME,
        .intval = 127,
    },/*
    {
        .ctl_name = MIXER_SGTL5000_INPGAR_IN3R_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_PGA_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_PGA_VOLUME,
        .intval = 7,
    },*/
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_IN3R_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_IN3R_VOLUME,
        .intval = 7,
    },
    {
        .ctl_name = NULL,
    },
};


static struct route_setting vx_main_mic_input_sgtl5000[] = {
    {
        .ctl_name = NULL,
    },
};

/*hs_mic exchanged with main mic for sabresd, because the the main is no implemented*/
static struct route_setting mm_hs_mic_input_sgtl5000[] = {
    {
        .ctl_name = MIXER_SGTL5000_CAPTURE_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_CAPTURE_VOLUME,
        .intval = 63,
    },
    {
        .ctl_name = MIXER_SGTL5000_DIGITAL_CAPTURE_VOLUME,
        .intval = 127,
    },/*
    {
        .ctl_name = MIXER_SGTL5000_INPGAR_IN3R_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_PGA_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_PGA_VOLUME,
        .intval = 7,
    },*/
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_IN3R_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = MIXER_SGTL5000_MIXINR_IN3R_VOLUME,
        .intval = 7,
    },
    {
        .ctl_name = NULL,
    },
};

static struct route_setting vx_bt_mic_input_sgtl5000[] = {
    {
        .ctl_name = NULL,
    },
};


static struct route_setting mm_bt_mic_input_sgtl5000[] = {
    {
        .ctl_name = NULL,
    },
};

/* ALSA cards for IMX, these must be defined according different board / kernel config*/
static struct audio_card  sgtl5000_card = {
    .name = "sgtl5000-audio",
    .driver_name = "sgtl5000-audio",
    .supported_out_devices = (AUDIO_DEVICE_OUT_EARPIECE |
            AUDIO_DEVICE_OUT_SPEAKER |
            AUDIO_DEVICE_OUT_WIRED_HEADSET |
            AUDIO_DEVICE_OUT_WIRED_HEADPHONE |
            AUDIO_DEVICE_OUT_ANLG_DOCK_HEADSET |
            AUDIO_DEVICE_OUT_DGTL_DOCK_HEADSET |
            AUDIO_DEVICE_OUT_ALL_SCO |
            AUDIO_DEVICE_OUT_DEFAULT ),
    .supported_in_devices = (
            AUDIO_DEVICE_IN_COMMUNICATION |
            AUDIO_DEVICE_IN_AMBIENT |
            AUDIO_DEVICE_IN_BUILTIN_MIC |
            AUDIO_DEVICE_IN_WIRED_HEADSET |
            AUDIO_DEVICE_IN_BACK_MIC |
            AUDIO_DEVICE_IN_ALL_SCO |
            AUDIO_DEVICE_IN_DEFAULT),
    .defaults            = defaults_sgtl5000,
    .bt_output           = bt_output_sgtl5000,
    .speaker_output      = speaker_output_sgtl5000,
    .hs_output           = hs_output_sgtl5000,
    .earpiece_output     = earpiece_output_sgtl5000,
    .vx_hs_mic_input     = vx_hs_mic_input_sgtl5000,
    .mm_main_mic_input   = mm_main_mic_input_sgtl5000,
    .vx_main_mic_input   = vx_main_mic_input_sgtl5000,
    .mm_hs_mic_input     = mm_hs_mic_input_sgtl5000,
    .vx_bt_mic_input     = vx_bt_mic_input_sgtl5000,
    .mm_bt_mic_input     = mm_bt_mic_input_sgtl5000,
    .card                = 0,
    .out_rate            = 0,
    .out_channels        = 0,
    .out_format          = 0,
    .in_rate             = 0,
    .in_channels         = 0,
    .in_format           = 0,
};

#endif  /* ANDROID_INCLUDE_IMX_CONFIG_SGTL5000_H */

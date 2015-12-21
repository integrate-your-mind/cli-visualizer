/*
 * VisConstants.h
 *
 * Created on: Jul 30, 2015
 *     Author: dpayne
 */

#ifndef _VIS_CONSTANTS_H
#define _VIS_CONSTANTS_H

#include <string>
#include "Domain/VisTypes.h"

namespace VisConstants
{
static const std::string k_true{"true"};
static const std::string k_false{"false"};

static const std::string k_mpd_audio_source_name{"mpd"};
static const std::string k_spectrum_visualizer_name{"spectrum"};
static const std::string k_spectrum_circle_visualizer_name{"spectrum_circle"};
static const std::string k_ellipse_visualizer_name{"ellipse"};
static const std::string k_lorenz_visualizer_name{"lorenz"};
static const uint32_t k_default_fps = 20;
static const uint32_t k_default_sampling_frequency = 44100;
static const uint32_t k_default_low_cutoff_frequency = 30;
static const uint32_t k_default_high_cutoff_frequency = 22050;
static const std::string k_default_config_path{".vis/config"};
static const std::string k_default_colors_path{".vis/colors"};
static const std::string k_default_log_path{".vis/vis.log"};
static const wchar_t k_default_spectrum_character{L' '};
static const wchar_t k_default_lorenz_character{L'\u2588'};
static const wchar_t k_default_ellipse_character{L'\u2588'};
static const uint32_t k_default_ellipse_radius{2};
static const double k_default_monstercat_smoothing_factor{1.5};
static const uint32_t k_default_monstercat_bar_width = 1;
static const uint32_t k_default_monstercat_bar_spacing = 0;
static const uint32_t k_default_sgs_smoothing_points{
    3}; // this should be an odd number
static const uint32_t k_default_sgs_smoothing_passes{1};
static const uint32_t k_default_spectrum_bar_width = 2;
static const uint32_t k_default_spectrum_bar_spacing = 1;
static const vis::SmoothingMode k_default_spectrum_smoothing_mode =
    vis::SmoothingMode::MonsterCat;
static const vis::FalloffMode k_default_spectrum_falloff_mode =
    vis::FalloffMode::Fill;
static const double k_default_spectrum_falloff_weight = 0.99;
static const int32_t k_default_user_input_timeout_milliseconds = 500;
static const uint64_t k_silent_sleep_milliseconds = 100ul;
static const wchar_t k_space_wchar{L' '};
}

#endif

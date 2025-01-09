#include "key_formats.h"
// all lengths in inches since it's all American formats
// angle is in degrees
const KeyFormat all_formats[] = {
    {
    .manufacturer = "Kwikset",
    .format_name = "KW1",
    .format_link = "https://lsamichigan.org/Tech/Kwikset_KeySpecs.pdf",
    .first_pin_inch = 0.247,
    .last_pin_inch = 0.847,
    .pin_increment_inch = 0.15,
    .pin_num = 5,
    .pin_width_inch = 0.084,
    .elbow_inch = 0.15,
    .drill_angle = 90,
    .uncut_depth_inch = 0.329,
    .deepest_depth_inch = 0.191,
    .depth_step_inch = 0.023,
    .min_depth_ind = 1,
    .max_depth_ind = 7,
    .macs = 4,
    .clearance = 3
    },

    {
    .manufacturer = "Schlage",
    .format_name = "SC4",
    .format_link = "https://lsamichigan.org/Tech/SCHLAGE_KeySpecs.pdf",
    .first_pin_inch = 0.231,
    .last_pin_inch = 1.012,
    .pin_increment_inch = 0.1562,
    .pin_num = 6,
    .pin_width_inch = 0.031,
    .elbow_inch = 0.1,
    .drill_angle = 90, // This should actually be 100 but the current resolution will make 100 degrees very ugly and unsuable
    .uncut_depth_inch = 0.335,
    .deepest_depth_inch = 0.2,
    .depth_step_inch = 0.015,
    .min_depth_ind = 0,
    .max_depth_ind = 9,
    .macs = 7,
    .clearance = 8
    }

{
    .manufacturer = "Sargent",
    .format_name = "L",  // Based on the keyway families listed in the doc
    .format_link = "https://lsamichigan.org/Tech/SARGENT_KeySpecs.pdf",
    .first_pin_inch = 0.215,
    .last_pin_inch = 0.839,
    .pin_increment_inch = 0.156,  // Calculated from pin position differences
    .pin_num = 6,
    .pin_width_inch = 0.115,  // From "All pins .115 diameter" note
    .elbow_inch = 0.156,  // This appears to be standard
    .drill_angle = 79,    // From the diagram
    .uncut_depth_inch = 0.330,  // From cut #1
    .deepest_depth_inch = 0.150,  // From cut #10
    .depth_step_inch = 0.020,  // Calculated from depth progression
    .min_depth_ind = 1,
    .max_depth_ind = 10,
    .macs = 7,        // This is an estimate based on similar systems
    .clearance = 8    // This is an estimate based on similar systems
}

};

#pragma once

#include "action.h"
#include "quantum_keycodes.h"

enum ju_custom_keycodes {
  JU_6 = SAFE_RANGE,
  JU_7,
  JU_8,
  JU_9,
  JU_0,
};

bool process_record_user_ju(uint16_t keycode, keyrecord_t *record);

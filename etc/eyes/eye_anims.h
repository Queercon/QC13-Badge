#ifndef EYEANIMS_H_
#define EYEANIMS_H_

#include "../../led_display.h"

extern uint64_t angry_frames[];
extern uint16_t angry_lengths[];
extern face_animation_t angry;
extern uint64_t blinking_frames[];
extern uint16_t blinking_lengths[];
extern face_animation_t blinking;
extern uint64_t cats_left_frames[];
extern uint16_t cats_left_lengths[];
extern face_animation_t cats_left;
extern uint64_t cats_right_frames[];
extern uint16_t cats_right_lengths[];
extern face_animation_t cats_right;
extern uint64_t crosseyedcat_frames[];
extern uint16_t crosseyedcat_lengths[];
extern face_animation_t crosseyedcat;
extern uint64_t cutesy_frames[];
extern uint16_t cutesy_lengths[];
extern face_animation_t cutesy;
extern uint64_t cutesy_left_frames[];
extern uint16_t cutesy_left_lengths[];
extern face_animation_t cutesy_left;
extern uint64_t cutesy_right_frames[];
extern uint16_t cutesy_right_lengths[];
extern face_animation_t cutesy_right;
extern uint64_t cute_lookaround_frames[];
extern uint16_t cute_lookaround_lengths[];
extern face_animation_t cute_lookaround;
extern uint64_t eyeroll_frames[];
extern uint16_t eyeroll_lengths[];
extern face_animation_t eyeroll;
extern uint64_t fall_asleep_frames[];
extern uint16_t fall_asleep_lengths[];
extern face_animation_t fall_asleep;
extern uint64_t fastblinking_frames[];
extern uint16_t fastblinking_lengths[];
extern face_animation_t fastblinking;
extern uint64_t konami_frames[];
extern uint16_t konami_lengths[];
extern face_animation_t konami;
extern uint64_t left_right_squint_frames[];
extern uint16_t left_right_squint_lengths[];
extern face_animation_t left_right_squint;
extern uint64_t look_around_frames[];
extern uint16_t look_around_lengths[];
extern face_animation_t look_around;
extern uint64_t meta_doubleinked_frames[];
extern uint16_t meta_doubleinked_lengths[];
extern face_animation_t meta_doubleinked;
extern uint64_t meta_gotinked_frames[];
extern uint16_t meta_gotinked_lengths[];
extern face_animation_t meta_gotinked;
extern uint64_t meta_inked_frames[];
extern uint16_t meta_inked_lengths[];
extern face_animation_t meta_inked;
extern uint64_t meta_inked_flash_frames[];
extern uint16_t meta_inked_flash_lengths[];
extern face_animation_t meta_inked_flash;
extern uint64_t meta_wakeup_frames[];
extern uint16_t meta_wakeup_lengths[];
extern face_animation_t meta_wakeup;
extern uint64_t punched_in_eye_frames[];
extern uint16_t punched_in_eye_lengths[];
extern face_animation_t punched_in_eye;
extern uint64_t sad_frames[];
extern uint16_t sad_lengths[];
extern face_animation_t sad;
extern uint64_t shake_frames[];
extern uint16_t shake_lengths[];
extern face_animation_t shake;
extern uint64_t something_in_eye_frames[];
extern uint16_t something_in_eye_lengths[];
extern face_animation_t something_in_eye;
extern uint64_t spazz_out_frames[];
extern uint16_t spazz_out_lengths[];
extern face_animation_t spazz_out;
extern uint64_t triple_blink_frames[];
extern uint16_t triple_blink_lengths[];
extern face_animation_t triple_blink;
#define FACE_ANIM_COUNT 21
#define FACE_ANIM_COUNT_INCL_META 26
#define FACE_ANIM_ANGRY 0
#define FACE_ANIM_BLINKING 1
#define FACE_ANIM_CATS_LEFT 2
#define FACE_ANIM_CATS_RIGHT 3
#define FACE_ANIM_CROSSEYEDCAT 4
#define FACE_ANIM_CUTESY 5
#define FACE_ANIM_CUTESY_LEFT 6
#define FACE_ANIM_CUTESY_RIGHT 7
#define FACE_ANIM_CUTE_LOOKAROUND 8
#define FACE_ANIM_EYEROLL 9
#define FACE_ANIM_FALL_ASLEEP 10
#define FACE_ANIM_FASTBLINKING 11
#define FACE_ANIM_KONAMI 12
#define FACE_ANIM_LEFT_RIGHT_SQUINT 13
#define FACE_ANIM_LOOK_AROUND 14
#define FACE_ANIM_PUNCHED_IN_EYE 15
#define FACE_ANIM_SAD 16
#define FACE_ANIM_SHAKE 17
#define FACE_ANIM_SOMETHING_IN_EYE 18
#define FACE_ANIM_SPAZZ_OUT 19
#define FACE_ANIM_TRIPLE_BLINK 20
#define FACE_ANIM_META_DOUBLEINKED 21
#define FACE_ANIM_META_GOTINKED 22
#define FACE_ANIM_META_INKED 23
#define FACE_ANIM_META_INKED_FLASH 24
#define FACE_ANIM_META_WAKEUP 25

extern face_animation_t *face_all_animations[FACE_ANIM_COUNT_INCL_META];
#endif // _H_

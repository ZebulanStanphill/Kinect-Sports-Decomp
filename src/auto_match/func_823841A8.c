/* Two-part caption update: after the start delay the second panel starts its animation (and the
   intro sound plays); once started, the middle and end cue sounds play at their times; when the
   whole duration is over the caption is reset. Both panels are then updated. */

#include "xdk/vectorintrinsics.h"

typedef struct Panel_823841A8 Panel_823841A8;

typedef struct PanelVtbl_823841A8 {
    void *slot0;
    void (*start)(Panel_823841A8 *self, float delay, float duration, float a, float b, float c, float d,
                  float e, float f, __vector4 from, __vector4 to, int g, int h, int i);
    void (*update)(Panel_823841A8 *self, float dt);
} PanelVtbl_823841A8;

struct Panel_823841A8 {
    PanelVtbl_823841A8 *vt;
    char pad4[0xf0 - 4];
};

typedef struct Sound_823841A8 {
    int bank; /* 0x00 */
} Sound_823841A8;

typedef struct Caption_823841A8 {
    char pad0[0x10];
    Panel_823841A8 first;  /* 0x010 */
    Panel_823841A8 second; /* 0x100 */
    int style;             /* 0x1f0 */
    char pad1F4[0xc];
    __vector4 v[5];   /* 0x200 */
    float duration;   /* 0x250 */
    float time;       /* 0x254 */
    float startTime;  /* 0x258 */
    float secondTime; /* 0x25c */
    float endTime;    /* 0x260 */
    float pad264;
    int middleCue;         /* 0x268 */
    int endCue;            /* 0x26c */
    int started;           /* 0x270 */
    int middlePlayed;      /* 0x274 */
    int endPlayed;         /* 0x278 */
    int soundsEnabled;     /* 0x27c */
    int active;            /* 0x280 */
    int silent;            /* 0x284 */
    Sound_823841A8 *sound; /* 0x288 */
    float *curve;          /* 0x28c */
} Caption_823841A8;

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

extern int fn_82535298(int *h, int id, void *a, void *b);
extern void fn_82536288(int *h);
extern void fn_823845A0(Caption_823841A8 *self);

static __forceinline void PlayCue(int cue, int bank)
{
    int h = cue;

    h = fn_82535298(&h, bank, lbl_83296BC0, lbl_83296BD0);
    fn_82536288(&h);
}

void fn_823841A8(Caption_823841A8 *self, float dt)
{
    float time;
    float start;
    float end;
    float *curve;

    if (self->active != 0) {
        time = self->time + dt;
        self->time = time;
        if (self->started == 0) {
            if (time >= self->startTime) {
                curve = self->curve;
                self->second.vt->start(&self->second, self->secondTime - time,
                                       self->duration - self->secondTime, curve[2], curve[3], curve[4],
                                       curve[5], curve[0], curve[1], self->v[3], self->v[4], 0, self->style,
                                       self->silent == 0);
                if (self->sound != 0 && self->silent == 0 && self->soundsEnabled != 0) {
                    PlayCue(self->middleCue, self->sound->bank);
                }
                self->started = 1;
            }
        } else {
            start = self->startTime;
            end = self->endTime - start + start;
            if (time >= ((-start >= 0.0f ? 0.0f : start) + end) * 0.5f && self->middlePlayed == 0 &&
                self->silent == 0 && self->soundsEnabled != 0 && self->sound != 0) {
                PlayCue(self->middleCue, self->sound->bank);
                self->middlePlayed = 1;
            }
            if (self->time >= end && self->endPlayed == 0 && self->sound != 0) {
                PlayCue(self->endCue, self->sound->bank);
                self->endPlayed = 1;
            }
        }
        if (self->time >= self->duration) {
            fn_823845A0(self);
        }
    }
    self->first.vt->update(&self->first, dt);
    self->second.vt->update(&self->second, dt);
}

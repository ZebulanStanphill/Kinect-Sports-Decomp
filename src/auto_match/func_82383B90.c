/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg. */

#include "xdk/vectorintrinsics.h"

typedef struct Movie_82383B90 {
    char pad0[0x34];
    int loaded;  /* 0x34 */
    int hidden;  /* 0x38 */
    void *movie; /* 0x3c */
} Movie_82383B90;

typedef struct Panel_82383B90 {
    char pad0[0x10];
    float start; /* 0x10 */
    float end;   /* 0x14 */
    float time;  /* 0x18 */
    char pad1c[0x4];
    __vector4 from; /* 0x20 */
    __vector4 to;   /* 0x30 */
    float x0;       /* 0x40 */
    float y0;       /* 0x44 */
    float x1;       /* 0x48 */
    float y1;       /* 0x4c */
    float scaleX;   /* 0x50 */
    float scaleY;   /* 0x54 */
    float alpha;    /* 0x58 */
    int visible;    /* 0x5c */
    int running;    /* 0x60 */
    int loop;       /* 0x64 */
    char pad68[0x8];
    Movie_82383B90 ui; /* 0x70 */
    char padb0[0x10];
    float velocityX; /* 0xc0 */
    float velocityY; /* 0xc4 */
    char padc8[0x8];
    __vector4 offset; /* 0xd0 */
    int active;       /* 0xe0 */
    int callback;     /* 0xe4 */
    int frames;       /* 0xe8 */
    int mode;         /* 0xec */
} Panel_82383B90;

extern void fn_82672C20(void *movie, const char *path, int arg2, int arg3);

void fn_82383B90(Panel_82383B90 *self, float start, float end, float x0, float y0, float x1, float y1,
                 float scale, float alpha, __vector4 from, __vector4 to, int visible, int loop, int callback)
{
    Movie_82383B90 *ui;

    self->start = start;
    self->end = end;
    self->running = 0;
    self->velocityX = 0.0f;
    self->visible = visible;
    self->velocityY = 0.0f;
    self->loop = loop;
    self->x0 = x0;
    self->callback = callback;
    self->y0 = y0;
    self->active = 1;
    self->x1 = x1;
    self->frames = 0;
    self->y1 = y1;
    self->time = 0.0f;
    self->scaleX = scale;
    self->scaleY = scale;
    self->alpha = alpha;
    self->offset = __VMXGetReg(77);
    self->from = from;
    self->to = to;
    if (self->mode == 6) {
        self->visible = visible == 0;
    }
    if (start > end) {
        ui = &self->ui;
        if (ui->loaded != 0 && ui->hidden == 0) {
            ui->hidden = 1;
            fn_82672C20(ui->movie, "_root.mainCtrl.hide", 0, 0);
        }
        self->running = 0;
    }
}

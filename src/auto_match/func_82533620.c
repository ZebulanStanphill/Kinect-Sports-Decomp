typedef struct Event_82533620 { char data[0x24]; } Event_82533620;

typedef struct Bus_82533620 {
    Event_82533620 event;   /* 0x00 */
    float min;              /* 0x24 */
    float max;              /* 0x28 */
} Bus_82533620;

typedef struct Audio_82533620 {
    Event_82533620 pause;   /* 0x00 */
    Event_82533620 resume;  /* 0x24 */
    Bus_82533620 music;     /* 0x48 */
    Bus_82533620 sfx;       /* 0x74 */
    Bus_82533620 speech;    /* 0xa0 */
} Audio_82533620;

extern void fn_82864988(Event_82533620 *e, const char *name);

Audio_82533620 *fn_82533620(Audio_82533620 *self)
{
    fn_82864988(&self->pause, "Game_Pause");
    fn_82864988(&self->resume, "Game_Resume");
    fn_82864988(&self->music.event, "main_bus_volume_music");
    self->music.min = 0.0f;
    self->music.max = 100.0f;
    fn_82864988(&self->sfx.event, "main_bus_volume_sfx");
    self->sfx.min = 0.0f;
    self->sfx.max = 100.0f;
    fn_82864988(&self->speech.event, "main_bus_volume_speech");
    self->speech.min = 0.0f;
    self->speech.max = 100.0f;
    return self;
}

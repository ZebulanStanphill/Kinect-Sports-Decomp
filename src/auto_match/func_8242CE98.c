typedef struct EventInfo_8242CE98 {
    char reserved000[0x114]; /* 0x000 */
    int eventType;           /* 0x114 */
} EventInfo_8242CE98;

typedef struct Event_8242CE98 {
    char reserved00[0x40];    /* 0x00 */
    EventInfo_8242CE98 *info; /* 0x40 */
} Event_8242CE98;

typedef struct Schedule_8242CE98 {
    char reserved000[0x1c4]; /* 0x000 */
    Event_8242CE98 **events; /* 0x1c4 */
    char reserved1c8[0xc];   /* 0x1c8 */
    int current;             /* 0x1d4 */
} Schedule_8242CE98;

typedef struct Session_8242CE98 {
    char reserved00[0x40];       /* 0x00 */
    Schedule_8242CE98 *schedule; /* 0x40 */
} Session_8242CE98;

typedef struct Game_8242CE98 {
    char reserved00[0x1c];    /* 0x00 */
    Session_8242CE98 session; /* 0x1c */
} Game_8242CE98;

typedef struct Screen_8242CE98 {
    char reserved000[0x174]; /* 0x000 */
    Game_8242CE98 *game;     /* 0x174 */
} Screen_8242CE98;

extern char lbl_82196582[];

static __forceinline Event_8242CE98 *CurrentEvent(Session_8242CE98 *session)
{
    /* Read once and left unused (an assertion compiled out in the release build, presumably); this
       load keeps the compiler from merging the two inlined calls' index tests. */
    Schedule_8242CE98 *schedule = session->schedule;

    if (session->schedule->current == -1) {
        return 0;
    }
    return session->schedule->events[session->schedule->current];
}

const char *fn_8242CE98(Screen_8242CE98 *self)
{
    Session_8242CE98 *session = &self->game->session;
    int eventType;

    if (CurrentEvent(session) != 0) {
        eventType = CurrentEvent(session)->info->eventType;
    } else {
        eventType = 0;
    }
    switch (eventType) {
    case 1:
        return "100m";
    case 2:
        return "hurdles";
    case 3:
        return "longjump";
    case 4:
        return "discus";
    case 5:
        return "javelin";
    }
    return lbl_82196582;
}

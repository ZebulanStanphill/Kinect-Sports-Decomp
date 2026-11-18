/* Plays a named commentary cue for a team unless commentary is blocked or the
 * cue's cool-down timer is still running; on success restarts the timer. */
typedef struct CueTeam_823695C0 {
    char pad00[0x18];
    void *sound; /* 0x18 */
    char pad1C[0x10];
    int index; /* 0x2C */
} CueTeam_823695C0;

typedef struct Commentary_823695C0 {
    char pad000[0x4C0];
    unsigned int blocked; /* 0x4C0 */
    char pad4C4[0xB84];
    float cooldowns[4][8]; /* 0x1048 */
} Commentary_823695C0;

extern const char lbl_82193008[8][0xc4];

unsigned char fn_822CCA50(void *sound, const char *name, float volume, int arg, unsigned char force);

int fn_823695C0(Commentary_823695C0 *self, CueTeam_823695C0 *team, int cue, float volume, float cooldown,
                int arg)
{
    int teamIndex = team->index;

    if (self->blocked == 0 && self->cooldowns[teamIndex][cue] <= 0.0f &&
        fn_822CCA50(team->sound, lbl_82193008[cue], volume, arg, 0)) {
        self->cooldowns[teamIndex][cue] = cooldown;
        return 1;
    }
    return 0;
}

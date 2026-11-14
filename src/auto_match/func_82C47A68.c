typedef struct Player_82C47A68 {
    char pad0[0xd68];
    int hasVideo;           /* 0xd68 */
    char padd6c[0xd78 - 0xd6c];
    int stopping;           /* 0xd78 */
    char padd7c[0xea0 - 0xd7c];
    int videoState;         /* 0xea0 */
    int audioState;         /* 0xea4 */
    char padea8[0xeb0 - 0xea8];
    int syncState;          /* 0xeb0 */
    int stopState;          /* 0xeb4 */
    char padeb8[0xebc - 0xeb8];
    int state;              /* 0xebc, updated under a spin lock by fn_82C69448 */
    char padec0[0x3d0c - 0xec0];
    int synced;             /* 0x3d0c */
} Player_82C47A68;

extern void fn_82C69448(int *state, int value);

void fn_82C47A68(Player_82C47A68 *self)
{
    if (self->stopping != 0)
        fn_82C69448(&self->state, self->stopState);
    else if (self->synced != 0 && self->hasVideo != 0)
        fn_82C69448(&self->state, self->syncState);
    else if (self->hasVideo != 0)
        fn_82C69448(&self->state, self->videoState);
    else
        fn_82C69448(&self->state, self->audioState);
}

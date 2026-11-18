typedef struct Actor_82419700 {
    char pad[0x7c0];
    void *rigidBody; /* 0x7c0 */
} Actor_82419700;

typedef struct Attachment_82419700 {
    char pad00[0x28];
    Actor_82419700 *actor; /* 0x28 */
    char pad2C[4];
    int pooled; /* 0x30 */
} Attachment_82419700;

typedef struct Projectile_82419700 {
    char pad00[0x10];
    Actor_82419700 *actor; /* 0x10 */
} Projectile_82419700;

typedef struct Settings_82419700 {
    char pad[0x9a8];
    float releaseTime; /* 0x9a8 */
} Settings_82419700;

typedef struct Manager_82419700 {
    char pad00[0x20];
    Attachment_82419700 **attachmentsBegin; /* 0x20 */
    Attachment_82419700 **attachmentsEnd;   /* 0x24 */
    char pad28[8];
    Attachment_82419700 *current; /* 0x30 */
    char pad34[0x54];
    Projectile_82419700 **projectilesBegin; /* 0x88 */
    Projectile_82419700 **projectilesEnd;   /* 0x8c */
    char pad90[0x10];
    int freePool; /* 0xa0 */
    char padA4[0x6c];
    int pooledPool; /* 0x110 */
    char pad114[0x74];
    Settings_82419700 **settings; /* 0x188 */
} Manager_82419700;

extern void fn_82D8B6C8(void *rigidBody, int motionType, int activation, int updateFilter);
extern void fn_82417D18(Manager_82419700 *self, int arg, Attachment_82419700 *attachment, int flag);
extern void fn_82416D20(int *pool, Attachment_82419700 *attachment);
extern void fn_82420AF0(Projectile_82419700 *projectile, float time, int flag);

int fn_82419700(Manager_82419700 *self, Actor_82419700 *actor)
{
    Attachment_82419700 **attachment;
    Attachment_82419700 **attachmentsEnd;
    Projectile_82419700 **projectile;
    Projectile_82419700 **projectilesEnd;
    Attachment_82419700 *foundAttachment;
    Projectile_82419700 *foundProjectile;
    Actor_82419700 *candidate;

    for (attachment = self->attachmentsBegin, attachmentsEnd = self->attachmentsEnd;
         attachment != attachmentsEnd; attachment++) {
        foundAttachment = *attachment;
        candidate = foundAttachment->actor;
        if (candidate == actor) {
            fn_82D8B6C8(candidate->rigidBody, 1, 1, 0);
            if (foundAttachment == self->current) {
                fn_82417D18(self, 1, foundAttachment, 0);
            } else {
                fn_82416D20(foundAttachment->pooled == 0 ? &self->freePool : &self->pooledPool,
                            foundAttachment);
            }
            return 1;
        }
    }
    for (projectile = self->projectilesBegin, projectilesEnd = self->projectilesEnd;
         projectile != projectilesEnd; projectile++) {
        foundProjectile = *projectile;
        candidate = foundProjectile->actor;
        if (candidate == actor) {
            fn_82D8B6C8(candidate->rigidBody, 1, 1, 0);
            fn_82420AF0(foundProjectile, (*self->settings)->releaseTime, 0);
            return 1;
        }
    }
    return 0;
}

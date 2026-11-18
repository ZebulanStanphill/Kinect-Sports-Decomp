/* Sort predicate over 0xdc-byte result entries: entries without a score go last in modes 1 and 2;
   mode 2 sorts ascending, every other mode descending.

   The original is an inline function (a functor's or lambda's operator()): its callers were compiled
   knowing that it does not write to the predicate object, but not which registers it leaves alone.
   `extern __inline` gives the same in C: an out-of-line copy in a COMDAT section. */
typedef struct Game_8227C270 {
    char padding000[0xa64];
    int mode; /* 0xa64 */
} Game_8227C270;

typedef struct Pred_8227C270 {
    Game_8227C270 *game;
} Pred_8227C270;

typedef struct Elem_8227C270 {
    char padding00[0xc];
    float score; /* 0x0c */
    char padding10[0xcc];
} Elem_8227C270;

extern __inline unsigned char fn_8227C270(Pred_8227C270 *self, const Elem_8227C270 *a,
                                          const Elem_8227C270 *b)
{
    if (a->score <= 0.0f && (self->game->mode == 1 || self->game->mode == 2)) {
        return 0;
    }
    if (b->score <= 0.0f && (self->game->mode == 1 || self->game->mode == 2)) {
        return 1;
    }
    if (self->game->mode == 2) {
        return a->score < b->score;
    }
    return a->score > b->score;
}

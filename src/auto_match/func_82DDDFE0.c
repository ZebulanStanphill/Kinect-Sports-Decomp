struct Candidate_82DDDFE0 {
    char padding[0x40];
    float cost; /* 0x40 */
    char padding44[0xc];
};

struct Search_82DDDFE0 {
    char padding[0x10];
    int count; /* 0x10 */
    char padding14[0xf5c];
    struct Candidate_82DDDFE0 candidates[1]; /* 0xf70 */
};

struct Candidate_82DDDFE0 *fn_82DDDFE0(struct Search_82DDDFE0 *self)
{
    struct Candidate_82DDDFE0 *cursor = self->candidates;
    struct Candidate_82DDDFE0 *best = cursor;
    float cost = cursor->cost;
    int remaining;
    for (remaining = self->count - 2; remaining >= 0; --remaining) {
        float cost2;
        ++cursor;
        cost2 = cursor->cost;
        if (cost2 < cost) {
            cost = cost2;
            best = cursor;
        }
    }
    return best;
}

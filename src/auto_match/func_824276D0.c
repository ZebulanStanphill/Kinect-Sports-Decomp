typedef struct Score_824276D0 {
    unsigned int value;
} Score_824276D0;

typedef struct Frame_824276D0 {
    void *unknown;
    Score_824276D0 *first;
    Score_824276D0 *second;
} Frame_824276D0;

typedef struct Player_824276D0 {
    unsigned int count;
    Frame_824276D0 **frames;
} Player_824276D0;

typedef struct Players_824276D0 {
    Player_824276D0 **begin;
    Player_824276D0 **end;
} Players_824276D0;

extern unsigned int fn_82427540(Player_824276D0 *, unsigned int);
extern unsigned int fn_82415090(Frame_824276D0 *);

static __forceinline int HasNext_824276D0(Player_824276D0 **it, Player_824276D0 **end)
{
    if (it != end) {
        return 1;
    }
    return 0;
}

unsigned int fn_824276D0(Player_824276D0 *self, Players_824276D0 *players, unsigned int limit)
{
    unsigned int frame = self->count + 1;
    unsigned int previous = frame - 1;
    unsigned int score = fn_82427540(self, previous);
    Frame_824276D0 *last = self->frames[frame - 2];
    unsigned int maximum;
    Score_824276D0 *first = last->first;
    unsigned char strike = first != 0 && first->value == 10;
    if (!strike) {
        unsigned char spare = first && last->second && last->second->value + first->value == 10;
        if (!spare) {
            maximum = fn_82415090(last);
        } else {
            maximum = 10;
        }
    } else {
        maximum = 10;
    }
    {
        Player_824276D0 **it = players->begin;
        Player_824276D0 **end = players->end;
        int ahead = 1;
        for (; HasNext_824276D0(it, end); ++it) {
            ahead = score < fn_82427540(*it, previous) ? ahead : 0;
        }
        return ahead && maximum <= limit;
    }
}

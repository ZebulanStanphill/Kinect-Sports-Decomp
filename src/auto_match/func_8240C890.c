typedef struct Score_8240C890 {
    unsigned int unused;
    unsigned int player;
    int first[6];
    int second[6];
} Score_8240C890;

typedef struct State_8240C890 {
    unsigned int padding[2];
    int special;
    int points[3];
    unsigned char padding18[0x14];
    void *handler; /* 0x2c */
    unsigned char padding30[0x14];
    Score_8240C890 score; /* 0x44 */
} State_8240C890;

typedef struct Event_8240C890 {
    unsigned int player;
    void *data;
    int padding[2];
    int type;
    int value;
    unsigned int rank;
} Event_8240C890;

extern void fn_82455578(void *self, void *data, int special);

void fn_8240C890(State_8240C890 *self, Event_8240C890 *event)
{
    int points = 0;
    int amount;
    Score_8240C890 *score;
    switch (event->rank) {
    case 0:
        points = 0;
        break;
    case 1:
        points = self->points[0];
        break;
    case 2:
        points = self->points[1];
        break;
    case 3:
        points = self->points[2];
        break;
    }
    if (event->type == 8) {
        amount = self->special;
    } else {
        amount = points;
    }
    score = &self->score;
    *(score->player == event->player ? score->second : score->first) += amount;
    (score->player == event->player ? score->first : score->second)[4] = event->value;
    fn_82455578(self->handler, event->data, event->rank == 3);
}

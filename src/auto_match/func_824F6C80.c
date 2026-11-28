typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* Tracks the two hands over the last four frames and turns their sideways motion into a steering
   rate, which is integrated into a heading wrapped to [-pi, pi]; then measures how far the heading is
   from the two lane headings. */
typedef struct Lane_824F6C80 {
    float heading; /* 0x00 */
    char pad4[0xc];
} Lane_824F6C80;

typedef struct Steering_824F6C80 {
    char pad0[0x218];
    float heading; /* 0x218 */
    char pad21c[0x4];
    float rate; /* 0x220 */
    char pad224[0xc];
    __vector4 rightHistory[4]; /* 0x230 */
    __vector4 leftHistory[4];  /* 0x270 */
    int rightIndex;            /* 0x2b0 */
    int leftIndex;             /* 0x2b4 */
    Lane_824F6C80 lanes[2];    /* 0x2b8 */
} Steering_824F6C80;

typedef struct Tuning_824F6C80 {
    float gain;          /* 0x00 */
    float levelBand;     /* 0x04 */
    float maxRate;       /* 0x08 */
    float confidence;    /* 0x0c */
    float deadZone;      /* 0x10 */
    int overrideHeading; /* 0x14 */
    float heading;       /* 0x18 */
} Tuning_824F6C80;

extern Tuning_824F6C80 lbl_831C3124;

extern void *fn_82F4EBC0(unsigned char player);
extern int fn_82F50108(void *skeleton, int joint, int space, __vector4 *position, __vector4 *velocity,
                       __vector4 *raw, int flags);

static __forceinline int NextIndex(int index)
{
    index++;
    if (index == 4)
        index = 0;
    return index;
}

void fn_824F6C80(Steering_824F6C80 *self)
{
    __vector4 leftHand;
    __vector4 rightHand;
    __vector4 spine;
    __vector4 rightElbow;
    __vector4 leftElbow;
    __vector4 rightFootVelocity;
    __vector4 rightHandRaw;
    __vector4 leftFootVelocity;
    __vector4 rightHandVelocity;
    __vector4 rightFootRaw;
    __vector4 leftElbowRaw;
    __vector4 rightFoot;
    __vector4 leftElbowVelocity;
    __vector4 leftHandVelocity;
    __vector4 rightElbowRaw;
    __vector4 leftFootRaw;
    __vector4 rightElbowVelocity;
    __vector4 leftFoot;
    __vector4 spineRaw;
    __vector4 leftHandRaw;
    __vector4 spineVelocity;
    void *skeleton;
    float leftHandSeen;
    float rightHandSeen;
    float leftElbowSeen;
    float rightElbowSeen;
    float spineSeen;
    float rightMotion;
    float leftMotion;
    float difference;
    float nearest;
    float heading;
    float confidence;
    float levelBand;
    int rightLevel;
    int leftLevel;
    int left;
    int right;
    int i;
    __vector4 *slot;

    skeleton = fn_82F4EBC0(0);
    fn_82F50108(skeleton, 0xb, 2, &leftFoot, &leftFootVelocity, &leftFootRaw, 0);
    fn_82F50108(skeleton, 0x10, 2, &rightFoot, &rightFootVelocity, &rightFootRaw, 0);
    leftHandSeen = (float)fn_82F50108(skeleton, 0xa, 2, &leftHand, &leftHandVelocity, &leftHandRaw, 0);
    rightHandSeen = (float)fn_82F50108(skeleton, 0xf, 2, &rightHand, &rightHandVelocity, &rightHandRaw, 0);
    leftElbowSeen = (float)fn_82F50108(skeleton, 9, 2, &leftElbow, &leftElbowVelocity, &leftElbowRaw, 0);
    rightElbowSeen =
        (float)fn_82F50108(skeleton, 0xe, 2, &rightElbow, &rightElbowVelocity, &rightElbowRaw, 0);
    spineSeen = (float)fn_82F50108(skeleton, 2, 2, &spine, &spineVelocity, &spineRaw, 0);
    confidence = lbl_831C3124.confidence;
    if (self->rightIndex == -1) {
        for (i = 0; i < 4; i++) {
            self->rightHistory[i] = rightHand;
            self->leftHistory[i] = leftHand;
        }
        self->rightIndex = 0;
        self->leftIndex = 0;
    } else {
        if (rightHandSeen > confidence) {
            slot = &self->rightHistory[self->rightIndex++];
            *slot = rightHand;
        }
        if (self->rightIndex == 4)
            self->rightIndex = 0;
        if (leftHandSeen > confidence) {
            slot = &self->leftHistory[self->leftIndex++];
            *slot = leftHand;
        }
        if (self->leftIndex == 4)
            self->leftIndex = 0;
    }
    rightMotion = 0.0f;
    leftMotion = 0.0f;
    left = self->leftIndex;
    right = self->rightIndex;
    for (i = 0; i < 3; i++) {
        int nextLeft = NextIndex(left);
        int nextRight = NextIndex(right);

        rightMotion +=
            self->rightHistory[nextRight].vector4_f32[0] - self->rightHistory[right].vector4_f32[0];
        leftMotion += self->leftHistory[nextLeft].vector4_f32[0] - self->leftHistory[left].vector4_f32[0];
        right = nextRight;
        left = nextLeft;
    }
    levelBand = lbl_831C3124.levelBand;
    rightLevel = 0;
    leftLevel = 0;
    rightMotion *= 0.33333334f;
    leftMotion *= 0.33333334f;
    if (rightHandSeen > confidence && rightElbowSeen > confidence && spineSeen > confidence &&
        spine.vector4_f32[0] < rightHand.vector4_f32[0]) {
        difference = rightHand.vector4_f32[1] - rightElbow.vector4_f32[1];
        if (difference > -levelBand && difference < levelBand)
            rightLevel = 1;
    }
    if (leftHandSeen > confidence && leftElbowSeen > confidence && spineSeen > confidence &&
        spine.vector4_f32[0] > leftHand.vector4_f32[0]) {
        difference = leftHand.vector4_f32[1] - leftElbow.vector4_f32[1];
        if (difference > -levelBand && difference < levelBand)
            leftLevel = 1;
    }
    if (rightLevel) {
        if (leftLevel)
            self->rate = 0.0f;
        else if (rightMotion < -lbl_831C3124.deadZone)
            self->rate = -(rightMotion * lbl_831C3124.gain);
    } else if (leftLevel) {
        if (leftMotion > lbl_831C3124.deadZone)
            self->rate = -(leftMotion * lbl_831C3124.gain);
    }
    if (self->rate > lbl_831C3124.maxRate)
        self->rate = lbl_831C3124.maxRate;
    else if (self->rate < -lbl_831C3124.maxRate)
        self->rate = -lbl_831C3124.maxRate;
    self->rate = self->rate * 0.95f;
    self->heading = self->heading + self->rate;
    if (self->heading > 3.1415927f)
        self->heading = self->heading - 6.2831855f;
    else if (self->heading < -3.1415927f)
        self->heading = self->heading + 6.2831855f;
    nearest = 10000.0f;
    heading = self->heading;
    for (i = 0; i < 2; i++) {
        difference = heading - self->lanes[i].heading;
        if (difference < 0.0f)
            difference = -difference;
        if (difference < nearest)
            nearest = difference;
    }
    if (lbl_831C3124.overrideHeading != 0)
        self->heading = lbl_831C3124.heading;
}

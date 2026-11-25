typedef struct Owner_82341BF0 Owner_82341BF0;
typedef struct Self_82337B90 Self_82337B90;
typedef struct Self_824CD030 Self_824CD030;
typedef struct Child_823427C0 Child_823427C0;

typedef struct Tween_827F57E8 {
    char pad[0x108];
    float previous;
    float current;
} Tween_827F57E8;

typedef struct TweenOwner_823427C0 {
    char pad[0x10];
    Tween_827F57E8 *tween;
} TweenOwner_823427C0;

typedef struct Selected_823427C0 {
    char pad[0xf0];
    void *item;
} Selected_823427C0;

typedef struct Entry_823427C0 {
    char pad[0x40];
    Selected_823427C0 *selected;
} Entry_823427C0;

typedef struct List_823427C0 {
    char pad[0x1c4];
    Entry_823427C0 **entries;
    char pad2[0xc];
    int index;
} List_823427C0;

typedef struct Group_823427C0 {
    char pad[0x40];
    List_823427C0 *list;
} Group_823427C0;

typedef struct Panel_823427C0 {
    char pad[0x1c];
    Group_823427C0 group;
} Panel_823427C0;

typedef struct Window_823427C0 {
    char pad[0x174];
    Panel_823427C0 *panel;
} Window_823427C0;

typedef struct View_823427C0 {
    char pad[0xc];
    Window_823427C0 *window;
} View_823427C0;

typedef struct State_823427C0 {
    char pad[0x78];
    int active;
} State_823427C0;

typedef struct ChildVt_823427C0 {
    char pad[0x24];
    void (*reset)(Child_823427C0 *);
} ChildVt_823427C0;

struct Child_823427C0 {
    ChildVt_823427C0 *vt;
    char pad[0x38];
    State_823427C0 *state;
};

typedef struct Control_823427C0 {
    Child_823427C0 *child;
    char pad[0x60];
    int mode;
} Control_823427C0;

struct Self_824CD030 {
    char pad[0xfc];
    Control_823427C0 *control;
};

struct Self_82337B90 {
    char pad[0x24];
    Self_824CD030 *overlay;
    char pad2[0xf0];
    TweenOwner_823427C0 *animation;
    char pad3[0x84];
    View_823427C0 *view;
};

typedef struct Link_823427C0 {
    Self_82337B90 *controller;
    char pad[0xc];
    int mode;
} Link_823427C0;

struct Owner_82341BF0 {
    char pad[0xc];
    Link_823427C0 *link;
};

extern int fn_82337B90(Self_82337B90 *);
extern void fn_82341BF0(Owner_82341BF0 *);
extern void fn_82349F78(Owner_82341BF0 *, int, int);
extern int fn_824CD030(Self_824CD030 *);
extern void fn_827F57E8(Tween_827F57E8 *, float, float);

static __forceinline Entry_823427C0 *SelectedEntry(Group_823427C0 *group)
{
    if (group->list->index == -1) {
        return 0;
    }
    return group->list->entries[group->list->index];
}

static __forceinline void SetTarget(TweenOwner_823427C0 *animation, float target)
{
    fn_827F57E8(animation->tween, target, 4.0f);
    animation->tween->previous = animation->tween->current;
}

void fn_823427C0(Owner_82341BF0 *self, int oldMode, int newMode)
{
    Self_824CD030 *overlay;
    if ((int)fn_82337B90(self->link->controller) == 0) {
        return;
    }
    overlay = self->link->controller->overlay;
    if (overlay != 0) {
        self->link->mode = 2;
        if (fn_824CD030(overlay)) {
            overlay->control->child->vt->reset(overlay->control->child);
            overlay->control->child->state->active = 0;
        }
        overlay->control->mode = 2;
    }
    switch (newMode) {
    case 4:
        SetTarget(self->link->controller->animation, 1.0f);
        break;
    case 3: {
        Self_82337B90 *controller = self->link->controller;
        Entry_823427C0 *entry = SelectedEntry(&controller->view->window->panel->group);
        if (entry->selected->item != 0) {
            SetTarget(controller->animation, 0.0f);
        } else {
            fn_82341BF0(self);
        }
        break;
    }
    }
    fn_82349F78(self, oldMode, newMode);
}

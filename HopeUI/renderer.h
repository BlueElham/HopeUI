#pragma once

/* Function Type */
typedef void (*functiontype)();

// ============================= Elements ===============================//

/* Structure for styling of elements */
typedef struct hrs
{
    int x;
    int y;
    int width;
    int height;
    int *background;
    int *foreground;
    int fontSize;
    int spacing;
    float border_roundness;
    int isVisible;
    int isSelected;
} hrs;

/* Element Structure */
typedef struct HUI_Element
{
    char *id;
    char *element;
    char *content;
    char *placeholder;
    hrs style;
    int zIndex;
    functiontype callback;
} HUI_Element;

/* HopeUI Creates New Element */
HUI_Element hrne(char *name);

/* HopeUI Label Element */
void hrel(HUI_Element data);

/* HopeUI Button Element */
void hreb(HUI_Element element, functiontype callback);

/* HopeUI Input Element */
void hrei(HUI_Element element);

// ============================= Window ===============================//

/* HopeUI Element Rendering */
void hrr(HUI_Element element);

/* HopeUI Initializes New Window */
void hri(int width, int height, char *title);

/* HopeUI Game Loop */
void hrgl(functiontype callback);

/* HopeUI Close Window */
void hrc();

/* HopeUI Get Window Width */
int hrgww();

/* HopeUI Get Window Height */
int hrgwh();

/* HopeUI Set Window Width */
void hrsww(int width);

/* HopeUI Set Window Height */
void hrswh(int height);

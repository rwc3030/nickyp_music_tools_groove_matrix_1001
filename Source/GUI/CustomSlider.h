#ifndef CUSTOMSLIDER_H
#define CUSTOMSLIDER_H

#include <JuceHeader.h>

class CustomSlider : public Slider
{
public:
    CustomSlider();
    void paint(Graphics& g) override;
    void resized() override;
};

#endif // CUSTOMSLIDER_H

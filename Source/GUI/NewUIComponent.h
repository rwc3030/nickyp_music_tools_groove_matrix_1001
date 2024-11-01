#ifndef NEWUICOMPONENT_H
#define NEWUICOMPONENT_H

#include <JuceHeader.h>

class NewUIComponent : public juce::Component
{
public:
    NewUIComponent();
    void paint(juce::Graphics& g) override;
    void resized() override;
};

#endif // NEWUICOMPONENT_H

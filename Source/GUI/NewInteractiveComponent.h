#ifndef NEWINTERACTIVECOMPONENT_H
#define NEWINTERACTIVECOMPONENT_H

#include <JuceHeader.h>

class NewInteractiveComponent : public juce::Component
{
public:
    NewInteractiveComponent();
    void paint(juce::Graphics& g) override;
    void resized() override;
};

#endif // NEWINTERACTIVECOMPONENT_H

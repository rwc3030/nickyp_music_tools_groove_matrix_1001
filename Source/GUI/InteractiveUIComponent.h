#ifndef INTERACTIVEUICOMPONENT_H
#define INTERACTIVEUICOMPONENT_H

#include <JuceHeader.h>

class InteractiveUIComponent : public juce::Component
{
public:
    InteractiveUIComponent();
    ~InteractiveUIComponent() override;

    void paint(juce::Graphics& g) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(InteractiveUIComponent)
};

#endif // INTERACTIVEUICOMPONENT_H

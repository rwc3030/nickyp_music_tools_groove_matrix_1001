#ifndef INTERACTIVEFEATURECOMPONENT_H
#define INTERACTIVEFEATURECOMPONENT_H

#include <JuceHeader.h>

class InteractiveFeatureComponent : public juce::Component
{
public:
    InteractiveFeatureComponent();
    void paint(juce::Graphics& g) override;
    void resized() override;

private:
    void handleButtonClick();

    juce::TextButton button;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(InteractiveFeatureComponent)
};

#endif // INTERACTIVEFEATURECOMPONENT_H

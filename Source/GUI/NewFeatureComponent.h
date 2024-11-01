#ifndef NEWFEATURECOMPONENT_H
#define NEWFEATURECOMPONENT_H

#include <JuceHeader.h>

class NewFeatureComponent : public juce::Component
{
public:
    NewFeatureComponent();
    void paint(juce::Graphics& g) override;
    void resized() override;
};

#endif // NEWFEATURECOMPONENT_H

#ifndef MAINCOMPONENT_H
#define MAINCOMPONENT_H

#include <JuceHeader.h>
#include "NewInteractiveComponent.h"

class MainComponent : public juce::Component
{
public:
    MainComponent();
    void paint(juce::Graphics& g) override;
    void resized() override;

private:
    NewInteractiveComponent newInteractiveComponent;
};

#endif // MAINCOMPONENT_H

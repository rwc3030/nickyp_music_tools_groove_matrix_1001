#ifndef INTERACTIVEBUTTONCOMPONENT_H
#define INTERACTIVEBUTTONCOMPONENT_H

#include <JuceHeader.h>

class InteractiveButtonComponent : public juce::Component
{
public:
    InteractiveButtonComponent();
    void paint(juce::Graphics& g) override;
    void resized() override;
    void setButtonText(const juce::String& text);

private:
    juce::String buttonText;
};

#endif // INTERACTIVEBUTTONCOMPONENT_H

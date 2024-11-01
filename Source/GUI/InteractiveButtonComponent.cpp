#include "InteractiveButtonComponent.h"
#include <JuceHeader.h>

InteractiveButtonComponent::InteractiveButtonComponent()
{
    setButtonText("Click Me");
    setSize(200, 50);
}

void InteractiveButtonComponent::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::lightblue);
    g.setColour(juce::Colours::black);
    g.drawText(buttonText, getLocalBounds(), juce::Justification::centred, true);
}

void InteractiveButtonComponent::resized()
{
    // Resize logic if needed
}

void InteractiveButtonComponent::setButtonText(const juce::String& text)
{
    buttonText = text;
}

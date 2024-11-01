#include "InteractiveFeatureComponent.h"
#include <JuceHeader.h>

InteractiveFeatureComponent::InteractiveFeatureComponent()
{
    // Initialize UI components here
    button.setButtonText("Click Me");
    button.onClick = [this] { handleButtonClick(); };
    addAndMakeVisible(button);
}

void InteractiveFeatureComponent::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::white);
    g.drawText("Interactive Feature", getLocalBounds(), juce::Justification::centred, true);
}

void InteractiveFeatureComponent::resized()
{
    button.setBounds(10, 10, getWidth() - 20, 40);
}

void InteractiveFeatureComponent::handleButtonClick()
{
    // Handle button click event
    DBG("Button clicked!");
}

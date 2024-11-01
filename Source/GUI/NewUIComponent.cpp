#include "NewUIComponent.h"
#include <JuceHeader.h>

NewUIComponent::NewUIComponent()
{
    // Constructor implementation
}

void NewUIComponent::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black); // Set background color
    g.setColour(juce::Colours::cyan); // Set text color
    g.drawText("New UI Component", getLocalBounds(), juce::Justification::centred, true); // Draw text
}

void NewUIComponent::resized()
{
    // Handle resizing if necessary
}

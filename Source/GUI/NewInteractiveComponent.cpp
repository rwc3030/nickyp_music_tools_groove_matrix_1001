#include "NewInteractiveComponent.h"
#include <JuceHeader.h>

NewInteractiveComponent::NewInteractiveComponent()
{
    // Set up the component's properties
    setSize(400, 300);
    setOpaque(true);
}

void NewInteractiveComponent::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::lightgrey); // Background color
    g.setColour(juce::Colours::black);
    g.drawText("New Interactive Component", getLocalBounds(), juce::Justification::centred, true);
}

void NewInteractiveComponent::resized()
{
    // Handle resizing of child components if any
}

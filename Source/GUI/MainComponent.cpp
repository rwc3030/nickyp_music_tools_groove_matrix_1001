#include "MainComponent.h"
#include "NewInteractiveComponent.h"

MainComponent::MainComponent()
{
    setSize(800, 600);
    addAndMakeVisible(newInteractiveComponent);
}

void MainComponent::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::white);
}

void MainComponent::resized()
{
    newInteractiveComponent.setBounds(getLocalBounds());
}

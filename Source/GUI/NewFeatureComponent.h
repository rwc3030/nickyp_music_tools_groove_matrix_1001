#ifndef NEWFEATURECOMPONENT_H
#define NEWFEATURECOMPONENT_H

#include <JuceHeader.h>

class NewFeatureComponent : public Component
{
public:
    NewFeatureComponent();
    void paint(Graphics&) override;
    void resized() override;

private:
    TextButton featureButton;

    void handleButtonClick();
};

#endif // NEWFEATURECOMPONENT_H

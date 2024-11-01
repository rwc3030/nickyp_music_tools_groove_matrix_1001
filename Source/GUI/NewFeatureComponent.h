#ifndef NEWFEATURECOMPONENT_H
#define NEWFEATURECOMPONENT_H

#include <JuceHeader.h>

class NewFeatureComponent : public Component
{
public:
    NewFeatureComponent();
    void paint(Graphics& g) override;
    void resized() override;

private:
    TextButton* button;

    void handleButtonClick();
};

#endif // NEWFEATURECOMPONENT_H

#pragma once

#include <string>

class Color;
class Font;
class UIControl;

class TextComponent
{
public:
    // TODO: find types
    static TextComponent * CARET_BLINK_TIME;
    
    TextComponent(UIControl&);
    ~TextComponent();
    
    void setLocalize(bool);
    void setPrimaryFont(Font&);
    void setBackupFont(Font*);
    void setHideHyphen(bool);
    void setLinePadding(float);
    void setLockedAlpha(float);
    void setLockedColor(Color const&);
    void setText(std::string const&);
    void setColor(Color const&);
    void setShadow(bool);
    
    std::string getText() const;
    bool getShadow() const;
    bool getLocalize() const;
    bool getHideHyphen() const;
};

#ifndef OPTION_H
#define OPTION_H

    enum {MODE, MUSIC_VOLUME, SFX_VOLUME, NUM_OPTIONS};

    void displayOptions(SDL_Renderer *renderer, SDL_Window *window, Pictures *pictures, Fonts *fonts, Sounds *sounds, Settings *settings, Input *in);
    void destroyOptionsTexts(SDL_Texture *texture[NUM_OPTIONS]);
    void loadOptionsTexts(SDL_Renderer *renderer, Fonts *fonts, Settings *settings, SDL_Texture *texture[NUM_OPTIONS], SDL_Rect pos_dst[NUM_OPTIONS]);
    void setSfxVolume(Sounds *sounds, int volume);

#endif // OPTION_H

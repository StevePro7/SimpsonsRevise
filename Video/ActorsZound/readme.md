Simpsons Revise
24/10/2021

IMPORTANT
I had to manually change the first byte of the sprite palette

const unsigned char wrong__palette__bin[] = {


in order to bypass the annoying flicker which I believe was occurring because of

engine_content_manager_load_sprite_palette( COLOR_WHITE );
{
  inputs = { };
  outputs = { self, ... } @ inputs: {
    overlays.default = final: prev: {
      slstatus =
        prev.slstatus.overrideAttrs
          (_oldAttrs: {
            src = ./.;
            conf = ./config.h;
          });
    };
  };
}

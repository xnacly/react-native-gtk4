{
  description = "React Native GTK4 proof of concept";
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };
  outputs = { self, nixpkgs }:
    let
      system = "x86_64-linux";
      pkgs = import nixpkgs { inherit system; };
    in {
      devShells.${system}.default = pkgs.mkShell {
        packages = [
          pkgs.pkg-config
          pkgs.gcc
          pkgs.gtk4
          pkgs.cmake
          pkgs.ninja
          # pkgs.hermes
          # pkgs.nodejs
          # pkgs.yarn
        ];

        shellHook = ''
          export PKG_CONFIG_PATH=${pkgs.gtk4.dev}/lib/pkgconfig:$PKG_CONFIG_PATH
        '';
      };
    };
}

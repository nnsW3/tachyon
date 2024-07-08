pub enum PCSType {
    GWC,
    SHPlonk,
}

pub enum TranscriptType {
    Blake2b,
    Poseidon,
    Sha256,
}

pub const SEED: [u8; 16] = [
    0x59, 0x62, 0xbe, 0x5d, 0x76, 0x3d, 0x31, 0x8d, 0x17, 0xdb, 0x37, 0x32, 0x54, 0x06, 0xbc, 0xe5,
];

# Union of American States: Gameplay Contracts

These are behavioral requirements, not flavor suggestions. A feature is incomplete when its script contradicts one of these contracts even if the game does not crash.

## Historical alignment

- UMI follows progressive democratic consolidation and reluctant collective defense.
- UAL follows pragmatic American isolationism and Southern self-sufficiency.
- UTX follows Bibb Graves's militarized American-globalist expansion.
- UCA follows revolutionary communism with heavy Soviet involvement.
- The USA follows democratic federal restoration with British support.
- Japan and the Soviet Union actively compete for influence in the American war.

## Japanese partnership

When UMI, UAL, UTX, or UCA takes the Japanese partnership while leading a faction:

1. The major and every current member of its faction move into Japan's faction as one political bloc.
2. The major and every one of those members adopt `american_globalism`.
3. No former member is left behind solely because the faction leader changed faction first.
4. The path remains available to faction leaders; bringing their coalition under Japan is intentional.

## Inter-American ideological war decisions

The automatic ideological-war decisions are a conflict mechanism for the four American majors, not a license for the world to attack every state.

- Valid actors: UMI, UAL, UTX, UCA.
- Valid targets: UMI, UAL, UTX, UCA.
- Actor and target must have different current ruling ideologies.
- Existing allies, subjects, co-belligerents, and countries already at war with each other are invalid.
- The target lists must be explicit so the decision system does not scan every country in the world.

## USA peace doctrine

When the USA wins a war against an American state:

1. The USA accepts only complete federal annexation or subjugation. It does not create a patchwork of partial state seizures, unrelated liberations, or stand-alone forced-government settlements.
2. A non-democratic American state that survives as a subject must receive a democratic government aligned with the federal USA.
3. USA allies spend their peace-conference influence to return American territory to USA control. They do not keep American states for themselves or hand them to unrelated allies.
4. American territory is treated as USA core homeland, not overseas spoils.
5. An American subject of the USA uses the UAS state-government autonomy level, `autonomy_united_states_state`, whenever that autonomy system is available.

The current 1.19 peace AI lives under `common/peace_conference/ai_peace`. The legacy files under `common/ai_peace` use an obsolete schema and must not be treated as active behavior.

## Constitutional Convention

The federal Constitutional Convention becomes available to the USA only when every surviving country in the authoritative 41-tag American-state set is a USA subject and all other American states have been annexed. Constitutional and federal-settlement logic uses the shared `UAS_is_american_state` trigger. The legacy `var_American_States` marker is not authoritative because foreign participants can receive it during expansion paths.

On completion:

- All American-state subjects are annexed into the USA.
- Annexed American territory is set to 100 compliance.
- Local-autonomy administration is used for American territory where occupation-law mechanics apply, representing functioning state governments beneath the federal system.
- The convention is deterministic. It is not a random ratification roll after the USA has already won and secured every state.

## Vanilla replacement policy

UAS is a total-overhaul world, not a tool intended to coexist with vanilla narrative logic.

- Vanilla content is retained only after it is reviewed and found compatible.
- The USA's vanilla Congress system is invalid here and must remain disabled until a UAS-specific federal legislature is designed.
- The London Naval Treaty and its national spirits/events are not part of this setting.
- Vanilla peace priorities for the USA are replaced by the federal-restoration doctrine above.
- Foreign majors are modernized in place. Japan and the Soviet Union receive first attention because they are structural participants in the American war; Britain follows because it is the USA's patron. Germany and Italy must eventually lose temporary subject/workaround logic in favor of deliberate UAS behavior.
- Mature American focus trees are preserved. Replacement work proceeds through bounded overrides, events, decisions, AI plans, and carefully placed rewards before large tree rewrites.

## Balance method

Balance changes must be attributable. Do not compensate for a global targeting bug by flooding a faction with factories.

Current starting-industry audit, before subject-transfer modifiers and excluding foreign UCA partners:

| Coalition | State military factories | State civilian factories | Important caveat |
| --- | ---: | ---: | --- |
| UMI bloc | 160 | 107 | Strongest contiguous American state-industry bloc. |
| UAL bloc | 83 | 59 | Roughly half UMI's military base. |
| UTX bloc | 105 | 61 | Smaller industry, but UTX begins with unusually high research capacity. |
| UCA American bloc | 88 | 46 | UCA itself also receives 128 off-map military and 128 off-map civilian factories, plus Asian partners. |

The July 2026 playtest cannot establish clean raw-strength balance because unrestricted global-war decisions produced worldwide declarations against UAL and UCA. The first comparison run after fixing that scope must keep starting industry unchanged. If UAL, UTX, or UCA still collapses consistently, inspect in this order:

1. Historical focus and strategy-plan selection.
2. Production lines, stockpiles, reinforcement deficits, and subject factory transfer.
3. Supply, front width, template use, air allocation, and division deployment.
4. War timing and multi-front exposure.
5. Only then, starting industry or combat modifiers.

## Required observer-run record

For each no-other-mods historical run, record:

- Game and mod version, checksum if available, and start/save type.
- Date and initiator of each major American war.
- Faction members and ruling ideologies immediately before the war.
- Capitulation dates, casualties, and warscore.
- Major stockpile deficits and active production lines at war start.
- Supply status and division counts on each principal front.
- Every peace action involving an American state and the final owner/overlord.
- Whether the USA Constitutional Convention appears and completes correctly.

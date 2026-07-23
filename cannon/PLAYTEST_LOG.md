# UAS Playtest Log

## 2026-07-10 — first successful large modern-version war

Environment: no other mods accepted for bug reporting; current target is HOI4 1.19.2.x.

Observed outcome:

- A large American/world war occurred without a crash.
- UTX, UCA, and UAL were defeated.
- A later large war formed between Michigan and its allies and the USA and its allies.

Observed defects:

- Michigan's coalition did not consistently adopt the major's ideology after the Japanese-partnership transition.
- UAL collapsed too quickly; UTX and UCA also appeared consistently too weak.
- Hundreds of countries could receive decisions to declare war on American states, creating both an unfair dogpile and a performance problem.
- Peace conferences allowed USA allies and unrelated states to partition American territory contrary to federal-restoration policy.
- Vanilla USA Congress and London Naval Treaty content appeared despite being incompatible with the setting.
- The failed-assassination story contained broken grammar and did not identify its dynamic attacker and target correctly.

Compatibility diagnosis for this pass:

- The global-war decisions searched the world instead of an explicit four-major target list.
- The mod's five legacy peace-AI files remained under the pre-peace-conference `common/ai_peace` schema and were not current 1.19 behavior.
- USA history still initialized vanilla Congress and treaty hooks.
- Assassination news used viewer/root scope without preserving both countries in the delayed event chain.

Next comparison run:

- Start a new historical game; do not reuse a save with already queued vanilla events.
- Confirm only UMI, UAL, UTX, and UCA see the ideological-war decisions, and only against a differently governed major.
- Confirm a major taking the Japan path converts all of its old faction members to `american_globalism`.
- Record UAL/UTX/UCA capitulation timing before changing their starting industry.
- Inspect every American peace action and verify allies bid territory back to USA rather than retaining it.
- Confirm no USA Congress category/events or London Naval Treaty spirits return during weekly cleanup.

## 2026-07-11 — federal victory follow-up

Observed defects:

- The USA won and secured every surviving American state, but the Federal Constitutional Convention remained unavailable.
- UMI, UAL, UTX, and UCA custom AI rules displayed without country flags.

Diagnosis and correction:

- The convention used the overloaded `var_American_States` marker. The Soviet Union independently survived with that marker, while Germany, Japan, Peru, and Venezuela were USA subjects carrying it. The prerequisite therefore waited for the Soviet Union and the completion effect would have annexed four foreign subjects.
- Constitutional, federal-puppet, and USA peace logic now use one authoritative scripted trigger containing exactly the 41 U-state tags.
- The custom convention decision was renamed because 1.19.2 added a vanilla decision with the same ID.
- The four custom AI rules now use explicit sprites backed by their existing small country flags; the frontend did not infer icons for these mod-added tags.

Save evaluation:

- In `USA_1947_02_02_19.hoi4`, every surviving actual U-state is a USA subject, so the corrected convention has no remaining state blocker.
- The convention effect remains runtime-untested until the updated scripts are loaded and the decision completes.

## 2026-07-11 — custom-rules lobby verification

- The first flag pass rendered all four major-state focus-path flags through the generic rule-icon box, leaving them top-left aligned. The explicit sprites were removed and the labels now use vanilla-style inline `@TAG` flag tokens.
- Texas's strength setting is loaded as the twelfth slider, one row below California; it is available after scrolling rather than missing.
- The fresh lobby logs contain no errors for the UAS rule sprites, difficulty settings, convention ID, or shared American-state trigger.
- The German title embedded in Junius Marion Futrell's name and the Berlin quotation used by American globalism are intentional legacy jokes and must remain unchanged.

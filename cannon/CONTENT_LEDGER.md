# Union of American States: Content Ledger

This ledger links the canon to current implementation. It is a map for review, not a claim that every listed item is already correct.

## Current narrative sources

| Content | Namespace or location | Canon contribution | Review state |
| --- | --- | --- | --- |
| Original public premise | `cannon/DESCRIPTION.txt` | Secession chronology, Michigan's peace role, the Texas-Alabama break, British-backed federal return. | Foundational; grammar is source text, not a style template. |
| Older UAS news | `events/AMER_News.txt`, `amer_news.1`–`.19` | Federal war/stand-down choices, American unification, foreign escalation, assassination system. | Mixed legacy content; review each item before reuse. |
| Core-arc news | `events/UAS_Core_Arc_News.txt`, `amer_news.20`–`.43` | Dallas crisis, Lansing diplomacy, Southern organization, California/Soviet industry, federal return machinery. | Preferred current voice and specificity. |
| Texas events | `events/Texan_Events.txt`, `texan.*` | Bibb's regime, assassination aftermath, checkpoints, black-market network, Texas-Alabama relations. | Core Texas source; post-Bibb material remains rare and late-game. |
| Major-state events | `events/American_Major_State_Events.txt`, `american_major.*` | Michigan mediation, Alabama council/Guard/logistics, California workers/Soviet/studio organization. | Core early/midgame source. |
| USA events | `events/American_USA_Events.txt`, `american_usa.*` | Federal courts, contact offices, bonds, threat briefings, war rooms, Michigan pact. | Core federal-restoration source. |

## Established arc anchors

- Dallas: Bibb Graves, Rangers, radio control, loyalty machinery, checkpoints, black-market weapons, and possible assassination fallout.
- Lansing: Fred W. Green, arbitration, safe rail corridors, staff tables, lawyers, and peacekeeping that can become collective defense.
- Montgomery and the South: Jim Folsom, a governors' council, the break with Texas, Guard depots, agricultural mobilization, and county logistics.
- California and the Pacific: Upton Sinclair, workers' congresses, Soviet advisers, Hollywood radio, harbors, and three-shift industry.
- Washington and federal return: courts reopened from exile, state contacts, Treasury/return bonds, threat maps, authorization rooms, and a final constitutional settlement.

## Known vanilla incompatibilities

| Vanilla system | UAS status |
| --- | --- |
| USA Congress decisions/events/modifiers | Startup initialization removed. The old duplicate-category override was ineffective in 1.19.2 and has been removed; remaining vanilla election/on-action hooks still need a bounded replacement. |
| London Naval Treaty spirits and event chain | Treaty triggers and spirits are suppressed. The old duplicate-category override was ineffective in 1.19.2 and has been removed; a clean category replacement remains pending. |
| Vanilla USA peace priorities | Replaced for American-state settlements by UAS peace desires. |
| Foreign-major focus/event/character assumptions | Still largely present or held behind temporary history workarounds. Requires staged JAP, SOV, ENG, GER, and ITA review. |
| Generic world reactions to an American warpath | Restricted to ideological conflict among the four American majors. |

The current static audit also finds 41 legacy 1939-bookmark `complete_national_focus` or `unlock_national_focus` references in the GER, ITA, and JAP history overrides whose focus IDs no longer exist in 1.19.2. They do not explain the 1936 playtest outcome, but they must be migrated or replaced during the foreign-major pass rather than copied forward as working behavior.

## Asset backlog

- `amer_news.12` and `amer_news.13` still use the pre-existing generic treaty news image. Replace it with assassination-success and captured-kill-team art.
- The Federal Constitutional Convention decision temporarily uses `GFX_decision_generic_form_nation`. Replace it with UAS convention/delegate artwork.
- Audit Fred W. Green and Upton Sinclair small portraits reported missing by the July 2026 runtime log.
- Federal puppet governments need a named democratic leadership roster and portraits for every U-state, especially UCA; the engine may otherwise fall back to a generic democratic leader after the USA imposes a settlement.
- Every future temporary generic portrait or event image must be listed here when introduced.

## Open design questions

- What exact constitutional structure and election schedule follows the USA convention?
- Does Michigan accept federal restoration voluntarily, negotiate a special settlement, or require the same surrender doctrine on historical AI?
- What democratic leadership is installed in a subjugated UTX, UCA, or UAL before final annexation?
- Which British units, ships, and economic transfers are formally American, and which remain covertly British?
- What replaces each foreign major's vanilla prewar crises, guarantees, and news chain in the UAS timeline?

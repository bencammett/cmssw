#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"
DEFINE_SEAL_MODULE();

#include "PhysicsTools/IsolationAlgos/interface/IsoDepositExtractor.h"
#include "PhysicsTools/IsolationAlgos/interface/IsoDepositExtractorFactory.h"
#include "EgammaTrackExtractor.h"
#include "EgammaEcalExtractor.h"
#include "EgammaHcalExtractor.h"
#include "EgammaTowerExtractor.h"
#include "EgammaRecHitExtractor.h"
DEFINE_EDM_PLUGIN(IsoDepositExtractorFactory, egammaisolation::EgammaTrackExtractor,  "EgammaTrackExtractor");
DEFINE_EDM_PLUGIN(IsoDepositExtractorFactory, egammaisolation::EgammaEcalExtractor,   "EgammaEcalExtractor");
DEFINE_EDM_PLUGIN(IsoDepositExtractorFactory, egammaisolation::EgammaHcalExtractor,   "EgammaHcalExtractor");
DEFINE_EDM_PLUGIN(IsoDepositExtractorFactory, egammaisolation::EgammaTowerExtractor,  "EgammaTowerExtractor");
DEFINE_EDM_PLUGIN(IsoDepositExtractorFactory, egammaisolation::EgammaRecHitExtractor, "EgammaRecHitExtractor");

#include "EgammaEcalRecHitIsolationProducer.h"
#include "EgammaElectronTkIsolationProducer.h"
#include "EgammaElectronTkNumIsolationProducer.h"
#include "EgammaPhotonTkIsolationProducer.h"
#include "EgammaPhotonTkNumIsolationProducer.h"
#include "EgammaTowerIsolationProducer.h"
//#include "EgammaDetIdCollectionProducer.h"
#include "GamIsoDetIdCollectionProducer.h"
#include "EleIsoDetIdCollectionProducer.h"

DEFINE_ANOTHER_FWK_MODULE(EgammaElectronTkIsolationProducer);
DEFINE_ANOTHER_FWK_MODULE(EgammaElectronTkNumIsolationProducer);
DEFINE_ANOTHER_FWK_MODULE(EgammaPhotonTkIsolationProducer);
DEFINE_ANOTHER_FWK_MODULE(EgammaPhotonTkNumIsolationProducer);
DEFINE_ANOTHER_FWK_MODULE(EgammaTowerIsolationProducer);
DEFINE_ANOTHER_FWK_MODULE(EgammaEcalRecHitIsolationProducer);
//DEFINE_ANOTHER_FWK_MODULE(EgammaDetIdCollectionProducer);
DEFINE_ANOTHER_FWK_MODULE(EleIsoDetIdCollectionProducer);
DEFINE_ANOTHER_FWK_MODULE(GamIsoDetIdCollectionProducer);

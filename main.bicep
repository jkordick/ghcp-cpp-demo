param location string = resourceGroup().location
param appServicePlanName string = 'cpp-demo-plan'
param webAppName string = 'cpp-demo-app'
param containerImageName string = 'cpp-demo:latest'

resource appServicePlan 'Microsoft.Web/serverfarms@2021-02-01' = {
  name: appServicePlanName
  location: location
  sku: {
    name: 'B1'
    tier: 'Basic'
  }
  kind: 'linux'
  properties: {
    reserved: true
  }
}

resource webApp 'Microsoft.Web/sites@2021-02-01' = {
  name: webAppName
  location: location
  kind: 'app'
  properties: {
    serverFarmId: appServicePlan.id
    siteConfig: {
      linuxFxVersion: 'DOCKER|${containerImageName}'
    }
  }
}

output appServicePlanId string = appServicePlan.id
output webAppId string = webApp.id
